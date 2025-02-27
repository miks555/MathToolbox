#pragma once
#include "trigonometry_class.h"
#include "errorclass.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for trigonometry
	/// </summary>
	public ref class trigonometry : public System::Windows::Forms::Form
	{
	public:
		trigonometry(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~trigonometry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::ComboBox^ comboBox_unit;
	protected:


	private: System::Windows::Forms::TextBox^ textBox_out;
	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button_close;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trigonometry::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_unit = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_out = (gcnew System::Windows::Forms::TextBox());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_menu
			// 
			this->label_menu->AutoSize = true;
			this->label_menu->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_menu->Location = System::Drawing::Point(12, 9);
			this->label_menu->Name = L"label_menu";
			this->label_menu->Size = System::Drawing::Size(231, 34);
			this->label_menu->TabIndex = 4;
			this->label_menu->Text = L"Trigonometry";
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(18, 46);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 20);
			this->textBox_a->TabIndex = 5;
			// 
			// comboBox_unit
			// 
			this->comboBox_unit->FormattingEnabled = true;
			this->comboBox_unit->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"radians", L"degrees" });
			this->comboBox_unit->Location = System::Drawing::Point(124, 45);
			this->comboBox_unit->Name = L"comboBox_unit";
			this->comboBox_unit->Size = System::Drawing::Size(121, 21);
			this->comboBox_unit->TabIndex = 6;
			// 
			// textBox_out
			// 
			this->textBox_out->Location = System::Drawing::Point(61, 90);
			this->textBox_out->Multiline = true;
			this->textBox_out->Name = L"textBox_out";
			this->textBox_out->ReadOnly = true;
			this->textBox_out->Size = System::Drawing::Size(149, 223);
			this->textBox_out->TabIndex = 7;
			// 
			// button_calc
			// 
			this->button_calc->Location = System::Drawing::Point(251, 44);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(75, 23);
			this->button_calc->TabIndex = 8;
			this->button_calc->Text = L"calculate";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &trigonometry::button_calc_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"cos()";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"sin()";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"tan()";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"ctan()";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"arccos()";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"arcsin()";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"arctan()";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"arcctan()";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"cosh()";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 210);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"sinh()";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"tanh()";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"ctanh()";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 249);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"arccosh()";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 262);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"arcsinh()";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 275);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"arctanh()";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 288);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"arcctanh()";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(286, 310);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 25;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &trigonometry::button_close_Click);
			// 
			// trigonometry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 345);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->textBox_out);
			this->Controls->Add(this->comboBox_unit);
			this->Controls->Add(this->textBox_a);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"trigonometry";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (textBox_a->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (comboBox_unit->SelectedIndex == -1)
			{
				error^ a = gcnew error(nothing_sel, "select");
				throw a;
			}

			trigonometry_class ^intance_trig = gcnew trigonometry_class(comboBox_unit->SelectedIndex, System::Convert::ToDouble(textBox_a->Text));
			std::vector<double> t = intance_trig->calc();
			for (unsigned i = 0; i < t.size(); i++)
			{
				textBox_out->AppendText(Environment::NewLine);
				textBox_out->AppendText(System::Convert::ToString(t.at(i)));
			}
		}
		catch (error^ a)
		{
			MessageBox::Show("error " + System::Convert::ToString(a->getNum()) + " has occurred :" + a->getDesc(), "error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (...)
		{
			MessageBox::Show("unknown error has occurred", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
};
}
