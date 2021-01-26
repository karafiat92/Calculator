#include "MyForm.h"
#include "MathLibrary.h"
using namespace Calculator;

Void MyForm::EnterNumber(System::Object^ sender, System::EventArgs^ e) {// ÂÂÅÄÅÍÈÅ ×ÈÑËÀ
	if (MyForm::count == 0) {
		Button^ Numbers = safe_cast<Button^>(sender);
		sValue2 += safe_cast<String^>(Numbers->Text);
		Calculator::MyForm::textBoxForResult->Text = textBoxForResult->Text + Numbers->Text;
	}
}
Void MyForm::but_dot_Click(System::Object^ sender, System::EventArgs^ e) {// ÒÎ×ÊÀ
	if (!sValue2->Contains(",")){
		sValue2 += ",";
		textBoxForResult->Text = textBoxForResult->Text + ",";
	}
}
Void MyForm::EnterOperator(System::Object^ sender, System::EventArgs^ e) {// ÂÂÅÄÅÍÈÅ ÎÏÅĞÀÒÎĞÀ
	if (count == 0) {
		if (!textBoxForResult->Text->Contains("+") && !textBoxForResult->Text->Contains("-") &&
			!textBoxForResult->Text->Contains("/") && !textBoxForResult->Text->Contains("*") &&
			!textBoxForResult->Text->Contains("|") && !textBoxForResult->Text->Contains("&&") &&
			!textBoxForResult->Text->Contains("^")) {
			Button^ OperatorS = safe_cast<Button^>(sender);
			sValue1 = sValue2;
			sValue2 = "";
			operators = OperatorS->Text;
			if (operators == "&&")
				textBoxForResult->Text = textBoxForResult->Text + "&";
			else
				textBoxForResult->Text = textBoxForResult->Text + OperatorS->Text;
		}
	}
}
Void MyForm::but_Clear_Click(System::Object^ sender, System::EventArgs^ e) {// Î×ÈÑÒÊÀ
	sValue1 = "";
	sValue2 = "";
	textBoxForResult->Text = "";
	dResult = 0;
	count = 0; // Î÷èùåíèå
}
bool MyForm::Protect() {// Çàùèòà îò íàæàòèÿ íà ïğîáåë, åñëè âûâîäèòü íå÷åãî
	if (textBoxForResult->Text->Length == 0 || sValue1 == "") return false;
	else return true;
}
Void MyForm::Result_Click(System::Object^ sender, System::EventArgs^ e) {//ĞÅÇÓËÜÒÀÒ
	if (Protect()) {
		if (operators == "")
	{
		textBoxForResult->Text = sValue2;
	}
	double dValue1 = System::Convert::ToDouble(sValue1); // ïğåîáğàçóåì ñòğîêó â double
	double dValue2 = System::Convert::ToDouble(sValue2); // ïğåîáğàçóåì ñòğîêó â double
	double dResult{ 0 };
	count = 1;
	if (operators == "+") {// ÑËÎÆÅÍÈÅ
		textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::Add(dValue1, dValue2));
	}
	if (operators == "-") {// ÂÛ×ÈÒÀÍÈÅ
		textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::Subtract(dValue1, dValue2));
	}
	if (operators == "/") {// ÄÅËÅÍÈÅ
		if (dValue2 != 0) {
			textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::Divide(dValue1, dValue2));
		}
		else {
			MessageBox::Show("Ïîïûòêà äåëåíèÿ íà 0", "Îøèáêà");
		}
	}
		if (operators == "*") {// ÓÌÍÎÆÅÍÈÅ
			textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::Multiply(dValue1, dValue2));
		}
		if (operators == "|") {// ÏÎÁÈÒÎÂÎÅ ÈËÈ
			textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::OR(dValue1, dValue2));
		}
		if (operators == "&&") {// ÏÎÁÈÒÎÂÎÅ È
			textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::AND(dValue1, dValue2));
		}
		if (operators == "^") {// ÏÎÁÈÒÎÂÎÅ ÈÑÊËŞ×ÀŞÙÅÅ ÈËÈ
			textBoxForResult->Text = System::Convert::ToString(MathLibrary::Operation::XOR(dValue1, dValue2));
		}
	}
}