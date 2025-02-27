#pragma once
#include"advanced_operations_class.h"
#include"errorclass.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for advanced_operations
	/// </summary>
	public ref class advanced_operations : public System::Windows::Forms::Form
	{
	public:
		advanced_operations(void)
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
		~advanced_operations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_main;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Button^ button_perform;
	private: System::Windows::Forms::ComboBox^ comboBox_operator;
	private: System::Windows::Forms::TextBox^ textBox_out;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox_number_b;
	private: System::Windows::Forms::TextBox^ textBox_number_a;
	private: System::Windows::Forms::PictureBox^ picture_calc;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(advanced_operations::typeid));
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_perform = (gcnew System::Windows::Forms::Button());
			this->comboBox_operator = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_out = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_number_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_number_a = (gcnew System::Windows::Forms::TextBox());
			this->picture_calc = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_calc))->BeginInit();
			this->SuspendLayout();
			// 
			// label_main
			// 
			this->label_main->AutoSize = true;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_main->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_main->Location = System::Drawing::Point(-1, 9);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(347, 34);
			this->label_main->TabIndex = 5;
			this->label_main->Text = L"Advanced Operations";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(272, 260);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 7;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &advanced_operations::button_close_Click);
			// 
			// button_perform
			// 
			this->button_perform->Location = System::Drawing::Point(194, 107);
			this->button_perform->Name = L"button_perform";
			this->button_perform->Size = System::Drawing::Size(53, 20);
			this->button_perform->TabIndex = 19;
			this->button_perform->Text = L"=";
			this->button_perform->UseVisualStyleBackColor = true;
			this->button_perform->Click += gcnew System::EventHandler(this, &advanced_operations::button_perform_Click);
			// 
			// comboBox_operator
			// 
			this->comboBox_operator->FormattingEnabled = true;
			this->comboBox_operator->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"power", L"root", L"log", L"greatest common divisor",
					L"smallest common multiple", L"factorial", L"newton\'s binomial"
			});
			this->comboBox_operator->Location = System::Drawing::Point(118, 71);
			this->comboBox_operator->Name = L"comboBox_operator";
			this->comboBox_operator->Size = System::Drawing::Size(129, 21);
			this->comboBox_operator->TabIndex = 18;
			// 
			// textBox_out
			// 
			this->textBox_out->Location = System::Drawing::Point(253, 107);
			this->textBox_out->Name = L"textBox_out";
			this->textBox_out->ReadOnly = true;
			this->textBox_out->Size = System::Drawing::Size(93, 20);
			this->textBox_out->TabIndex = 17;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(118, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 5);
			this->panel1->TabIndex = 16;
			// 
			// textBox_number_b
			// 
			this->textBox_number_b->Location = System::Drawing::Point(253, 72);
			this->textBox_number_b->Name = L"textBox_number_b";
			this->textBox_number_b->Size = System::Drawing::Size(93, 20);
			this->textBox_number_b->TabIndex = 15;
			// 
			// textBox_number_a
			// 
			this->textBox_number_a->Location = System::Drawing::Point(253, 46);
			this->textBox_number_a->Name = L"textBox_number_a";
			this->textBox_number_a->Size = System::Drawing::Size(93, 20);
			this->textBox_number_a->TabIndex = 14;
			// 
			// picture_calc
			// 
			this->picture_calc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->picture_calc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_calc.Image")));
			this->picture_calc->ImageLocation = L"";
			this->picture_calc->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_calc.InitialImage")));
			this->picture_calc->Location = System::Drawing::Point(12, 193);
			this->picture_calc->Name = L"picture_calc";
			this->picture_calc->Size = System::Drawing::Size(100, 90);
			this->picture_calc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_calc->TabIndex = 20;
			this->picture_calc->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"enter argument of single-argument operations at the top";
			// 
			// advanced_operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 295);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picture_calc);
			this->Controls->Add(this->button_perform);
			this->Controls->Add(this->comboBox_operator);
			this->Controls->Add(this->textBox_out);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox_number_b);
			this->Controls->Add(this->textBox_number_a);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_main);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"advanced_operations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_calc))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
	}
	private: System::Void button_perform_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (textBox_number_a->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_number_b->Text->Length == 0&& comboBox_operator->SelectedIndex!=5&& comboBox_operator->SelectedIndex != -1)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			switch (comboBox_operator->SelectedIndex)
			{
			case 0:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->power());
				break;
			}
			case 1:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->sqr());
				break;
			}
			case 2:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->log());
				break;
			}
			case 3:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->gcd());
				break;
			}
			case 4:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->scm());
				break;
			}
			case 5:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, "0");
				textBox_out->Text = System::Convert::ToString(operation->factorial(System::Convert::ToInt32(textBox_number_a->Text)));
				break;
			}
			case 6:
			{
				advanced_operations_class^ operation = gcnew advanced_operations_class(textBox_number_a->Text, textBox_number_b->Text);
				textBox_out->Text = System::Convert::ToString(operation->newton());
				break;
			}

			default:
			{
				error^ a = gcnew error(nothing_sel, "please select first");
				throw a;
				break;
			}
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

};
}
