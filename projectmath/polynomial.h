#pragma once
#include "errorclass.h"
#include "polynomial_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for polynomial
	/// </summary>
	public ref class polynomial : public System::Windows::Forms::Form
	{
	public:
		polynomial(void)
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
		~polynomial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Button^ button_calculate_int;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_coefficients;
	private: System::Windows::Forms::Button^ button_calculate_x;
	private: System::Windows::Forms::TextBox^ textBox_x;
	private: System::Windows::Forms::TextBox^ textBox_int_b;
	private: System::Windows::Forms::TextBox^ textBox_int_a;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_int_dx;

	private: System::Windows::Forms::TextBox^ textBox_int_out;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_x_out;

	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(polynomial::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_calculate_int = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_coefficients = (gcnew System::Windows::Forms::TextBox());
			this->button_calculate_x = (gcnew System::Windows::Forms::Button());
			this->textBox_x = (gcnew System::Windows::Forms::TextBox());
			this->textBox_int_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_int_a = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_int_dx = (gcnew System::Windows::Forms::TextBox());
			this->textBox_int_out = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_x_out = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->label_menu->Size = System::Drawing::Size(189, 34);
			this->label_menu->TabIndex = 5;
			this->label_menu->Text = L"Polynomial";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(393, 305);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 18;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &polynomial::button_close_Click);
			// 
			// button_calculate_int
			// 
			this->button_calculate_int->Location = System::Drawing::Point(276, 203);
			this->button_calculate_int->Name = L"button_calculate_int";
			this->button_calculate_int->Size = System::Drawing::Size(75, 23);
			this->button_calculate_int->TabIndex = 19;
			this->button_calculate_int->Text = L"calculate";
			this->button_calculate_int->UseVisualStyleBackColor = true;
			this->button_calculate_int->Click += gcnew System::EventHandler(this, &polynomial::button_calculate_int_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 171);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"coefficients (largest power to smallest)";
			// 
			// textBox_coefficients
			// 
			this->textBox_coefficients->Location = System::Drawing::Point(21, 63);
			this->textBox_coefficients->Name = L"textBox_coefficients";
			this->textBox_coefficients->Size = System::Drawing::Size(100, 20);
			this->textBox_coefficients->TabIndex = 22;
			// 
			// button_calculate_x
			// 
			this->button_calculate_x->Location = System::Drawing::Point(128, 98);
			this->button_calculate_x->Name = L"button_calculate_x";
			this->button_calculate_x->Size = System::Drawing::Size(75, 23);
			this->button_calculate_x->TabIndex = 23;
			this->button_calculate_x->Text = L"calculate";
			this->button_calculate_x->UseVisualStyleBackColor = true;
			this->button_calculate_x->Click += gcnew System::EventHandler(this, &polynomial::button_calculate_x_Click);
			// 
			// textBox_x
			// 
			this->textBox_x->Location = System::Drawing::Point(21, 101);
			this->textBox_x->Name = L"textBox_x";
			this->textBox_x->Size = System::Drawing::Size(100, 20);
			this->textBox_x->TabIndex = 24;
			// 
			// textBox_int_b
			// 
			this->textBox_int_b->Location = System::Drawing::Point(55, 145);
			this->textBox_int_b->Name = L"textBox_int_b";
			this->textBox_int_b->Size = System::Drawing::Size(100, 20);
			this->textBox_int_b->TabIndex = 25;
			// 
			// textBox_int_a
			// 
			this->textBox_int_a->Location = System::Drawing::Point(41, 314);
			this->textBox_int_a->Name = L"textBox_int_a";
			this->textBox_int_a->Size = System::Drawing::Size(100, 20);
			this->textBox_int_a->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(123, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 26);
			this->label2->TabIndex = 27;
			this->label2->Text = L"W(x)";
			// 
			// textBox_int_dx
			// 
			this->textBox_int_dx->Location = System::Drawing::Point(197, 232);
			this->textBox_int_dx->Name = L"textBox_int_dx";
			this->textBox_int_dx->Size = System::Drawing::Size(100, 20);
			this->textBox_int_dx->TabIndex = 28;
			// 
			// textBox_int_out
			// 
			this->textBox_int_out->Location = System::Drawing::Point(322, 232);
			this->textBox_int_out->Name = L"textBox_int_out";
			this->textBox_int_out->ReadOnly = true;
			this->textBox_int_out->Size = System::Drawing::Size(100, 20);
			this->textBox_int_out->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"=";
			// 
			// textBox_x_out
			// 
			this->textBox_x_out->Location = System::Drawing::Point(209, 101);
			this->textBox_x_out->Name = L"textBox_x_out";
			this->textBox_x_out->ReadOnly = true;
			this->textBox_x_out->Size = System::Drawing::Size(100, 20);
			this->textBox_x_out->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"x";
			// 
			// polynomial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 340);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_x_out);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_int_out);
			this->Controls->Add(this->textBox_int_dx);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_int_a);
			this->Controls->Add(this->textBox_int_b);
			this->Controls->Add(this->textBox_x);
			this->Controls->Add(this->button_calculate_x);
			this->Controls->Add(this->textBox_coefficients);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_calculate_int);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"polynomial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
	private: System::Void button_calculate_int_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			if (textBox_int_a->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_int_b->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_int_dx->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_coefficients->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			polynomial_case_b^ inst_int = gcnew polynomial_case_b(textBox_int_a->Text, textBox_int_b->Text, textBox_int_dx->Text, textBox_coefficients->Text);
			textBox_int_out->Text = System::Convert::ToString(inst_int->calculate_int());
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
	private: System::Void button_calculate_x_Click(System::Object^ sender, System::EventArgs^ e) {
	
		try
		{
			if (textBox_coefficients->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_x->Text->Length == 0)
			{
				textBox_x->Text = "0";
			}
			polynomial_case_a^ inst_p = gcnew polynomial_case_a(textBox_x->Text, textBox_coefficients->Text);
			textBox_x_out->Text = System::Convert::ToString(inst_p->calculate_y());
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
