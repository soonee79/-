#pragma once

namespace калькул€тор {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(206, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(323, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(343, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(97, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &MyForm::button1_MouseHover);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(97, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->button2->MouseHover += gcnew System::EventHandler(this, &MyForm::button2_MouseHover);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(206, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button3_MouseEnter);
			this->button3->MouseHover += gcnew System::EventHandler(this, &MyForm::button3_MouseHover);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(206, 187);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 7;
			this->button4->Text = L":";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm::button4_MouseEnter);
			this->button4->MouseHover += gcnew System::EventHandler(this, &MyForm::button4_MouseHover);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(159, 250);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(482, 399);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"калькул€тор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ((Button^)sender)->Text;
		double a, b;
		a = Convert::ToInt32(textBox1->Text);
		b = Convert::ToInt32(textBox2->Text);
		label2->Text = (a + b).ToString();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ((Button^)sender)->Text;
		double a, b;
		a = Convert::ToInt32(textBox1->Text);
		b = Convert::ToInt32(textBox2->Text);
		label2->Text = (a - b).ToString();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ((Button^)sender)->Text;
		double a, b;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		label2->Text = (a * b).ToString();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ((Button^)sender)->Text;
		double a, b;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		if (b != 0) {
			label2->Text = (a / b).ToString();
		}
		else {
			MessageBox::Show("ƒеление на ноль невозможно!");
		}
	}

	private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		button1-> BackColor = Color::Aquamarine;
	}

private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->BackColor = Color::WhiteSmoke;
}
private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = Color::Aquamarine;
}
private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = Color::WhiteSmoke;
}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button3->BackColor = Color::Aquamarine;
}
private: System::Void button3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button3->BackColor = Color::WhiteSmoke;
}
private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button4->BackColor = Color::Aquamarine;
}
private: System::Void button4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button4->BackColor = Color::WhiteSmoke;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	label2->Text = "";
}
};
}

