#pragma once
#include "errorclass.h"
#include "number_system_conversion_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for number_system_conversion
	/// </summary>
	public ref class number_system_conversion : public System::Windows::Forms::Form
	{
	public:
		number_system_conversion(void)
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
		~number_system_conversion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Button^ button_convert_10_o;
	private: System::Windows::Forms::TextBox^ textBox_input_10_o;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_out_10_o;
	private: System::Windows::Forms::TextBox^ textBox_base_10_o;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_base_o_10;
	private: System::Windows::Forms::TextBox^ textBox_out_o_10;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_input_o_10;

	private: System::Windows::Forms::Button^ button_convert_o_10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ picture_triangle;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(number_system_conversion::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_convert_10_o = (gcnew System::Windows::Forms::Button());
			this->textBox_input_10_o = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_out_10_o = (gcnew System::Windows::Forms::TextBox());
			this->textBox_base_10_o = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_base_o_10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_out_o_10 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_input_o_10 = (gcnew System::Windows::Forms::TextBox());
			this->button_convert_o_10 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picture_triangle = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->BeginInit();
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
			this->label_menu->Size = System::Drawing::Size(443, 34);
			this->label_menu->TabIndex = 7;
			this->label_menu->Text = L"Number System Conversion";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(368, 311);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 20;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &number_system_conversion::button_close_Click);
			// 
			// button_convert_10_o
			// 
			this->button_convert_10_o->Location = System::Drawing::Point(170, 57);
			this->button_convert_10_o->Name = L"button_convert_10_o";
			this->button_convert_10_o->Size = System::Drawing::Size(75, 23);
			this->button_convert_10_o->TabIndex = 21;
			this->button_convert_10_o->Text = L"convert";
			this->button_convert_10_o->UseVisualStyleBackColor = true;
			this->button_convert_10_o->Click += gcnew System::EventHandler(this, &number_system_conversion::button_convert_10_o_Click);
			// 
			// textBox_input_10_o
			// 
			this->textBox_input_10_o->Location = System::Drawing::Point(18, 59);
			this->textBox_input_10_o->Name = L"textBox_input_10_o";
			this->textBox_input_10_o->Size = System::Drawing::Size(100, 20);
			this->textBox_input_10_o->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"10 to other";
			// 
			// textBox_out_10_o
			// 
			this->textBox_out_10_o->Location = System::Drawing::Point(18, 86);
			this->textBox_out_10_o->Name = L"textBox_out_10_o";
			this->textBox_out_10_o->ReadOnly = true;
			this->textBox_out_10_o->Size = System::Drawing::Size(100, 20);
			this->textBox_out_10_o->TabIndex = 24;
			// 
			// textBox_base_10_o
			// 
			this->textBox_base_10_o->Location = System::Drawing::Point(124, 59);
			this->textBox_base_10_o->Name = L"textBox_base_10_o";
			this->textBox_base_10_o->Size = System::Drawing::Size(30, 20);
			this->textBox_base_10_o->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"base";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(124, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"base";
			// 
			// textBox_base_o_10
			// 
			this->textBox_base_o_10->Location = System::Drawing::Point(124, 143);
			this->textBox_base_o_10->Name = L"textBox_base_o_10";
			this->textBox_base_o_10->Size = System::Drawing::Size(30, 20);
			this->textBox_base_o_10->TabIndex = 31;
			// 
			// textBox_out_o_10
			// 
			this->textBox_out_o_10->Location = System::Drawing::Point(18, 170);
			this->textBox_out_o_10->Name = L"textBox_out_o_10";
			this->textBox_out_o_10->ReadOnly = true;
			this->textBox_out_o_10->Size = System::Drawing::Size(100, 20);
			this->textBox_out_o_10->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"other to 10";
			// 
			// textBox_input_o_10
			// 
			this->textBox_input_o_10->Location = System::Drawing::Point(18, 143);
			this->textBox_input_o_10->Name = L"textBox_input_o_10";
			this->textBox_input_o_10->Size = System::Drawing::Size(100, 20);
			this->textBox_input_o_10->TabIndex = 28;
			// 
			// button_convert_o_10
			// 
			this->button_convert_o_10->Location = System::Drawing::Point(170, 141);
			this->button_convert_o_10->Name = L"button_convert_o_10";
			this->button_convert_o_10->Size = System::Drawing::Size(75, 23);
			this->button_convert_o_10->TabIndex = 27;
			this->button_convert_o_10->Text = L"convert";
			this->button_convert_o_10->UseVisualStyleBackColor = true;
			this->button_convert_o_10->Click += gcnew System::EventHandler(this, &number_system_conversion::button_convert_o_10_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(252, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"enter a number in the format 1234";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(252, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"enter a number in the format 1,2,3,4";
			// 
			// picture_triangle
			// 
			this->picture_triangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(12, 217);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(166, 117);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 39;
			this->picture_triangle->TabStop = false;
			// 
			// number_system_conversion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 346);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_base_o_10);
			this->Controls->Add(this->textBox_out_o_10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_input_o_10);
			this->Controls->Add(this->button_convert_o_10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_base_10_o);
			this->Controls->Add(this->textBox_out_10_o);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_input_10_o);
			this->Controls->Add(this->button_convert_10_o);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"number_system_conversion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}


private: System::Void button_convert_10_o_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_input_10_o->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_base_10_o->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		conversion_10_o^ inst_c = gcnew conversion_10_o(textBox_input_10_o->Text,textBox_base_10_o->Text);
		textBox_out_10_o->Text = inst_c->convert();
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
private: System::Void button_convert_o_10_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_input_o_10->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_base_o_10->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		conversion_o_10^ inst_c = gcnew conversion_o_10(textBox_input_o_10->Text, textBox_base_o_10->Text);
		textBox_out_o_10->Text = inst_c->convert();
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
