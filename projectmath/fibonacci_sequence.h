#pragma once
#include "errorclass.h"
namespace projectmath {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for fibonacci_sequence
	/// </summary>
	public ref class fibonacci_sequence : public System::Windows::Forms::Form
	{
	public:
		fibonacci_sequence(void)
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
		~fibonacci_sequence()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::TextBox^ textBox_in;
	private: System::Windows::Forms::TextBox^ textBox_out;
	private: System::Windows::Forms::Button^ button;
	private: System::Windows::Forms::Button^ button_close;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fibonacci_sequence::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->textBox_in = (gcnew System::Windows::Forms::TextBox());
			this->textBox_out = (gcnew System::Windows::Forms::TextBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
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
			this->label_menu->Size = System::Drawing::Size(313, 34);
			this->label_menu->TabIndex = 4;
			this->label_menu->Text = L"Fibonacci Sequence";
			// 
			// textBox_in
			// 
			this->textBox_in->Location = System::Drawing::Point(18, 47);
			this->textBox_in->Name = L"textBox_in";
			this->textBox_in->Size = System::Drawing::Size(100, 20);
			this->textBox_in->TabIndex = 5;
			// 
			// textBox_out
			// 
			this->textBox_out->Location = System::Drawing::Point(18, 74);
			this->textBox_out->Multiline = true;
			this->textBox_out->Name = L"textBox_out";
			this->textBox_out->ReadOnly = true;
			this->textBox_out->Size = System::Drawing::Size(262, 182);
			this->textBox_out->TabIndex = 6;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(125, 47);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 23);
			this->button->TabIndex = 7;
			this->button->Text = L"find";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &fibonacci_sequence::button_Click);
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(291, 233);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 17;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &fibonacci_sequence::button_close_Click);
			// 
			// picture_triangle
			// 
			this->picture_triangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(286, 89);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(78, 138);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 37;
			this->picture_triangle->TabStop = false;
			// 
			// fibonacci_sequence
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 268);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button);
			this->Controls->Add(this->textBox_out);
			this->Controls->Add(this->textBox_in);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"fibonacci_sequence";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		unsigned long long int fibb(int n)
		{
			if (n == 1)
			{
				return 0;
			}
			if (n == 2)
			{
				return 1;
			}
			return fibb(n - 1) + fibb(n - 2);
		}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	
		try
		{
			if (textBox_in->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (System::Convert::ToDouble(textBox_in->Text) < 1)
			{
				error^ a = gcnew error(data, "n<1");
				throw a;
			}
			textBox_out->Text = System::Convert::ToString(fibb(System::Convert::ToInt32(textBox_in->Text)));
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
