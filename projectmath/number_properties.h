#pragma once
#include "number_properties_class.h"
#include "errorclass.h"
#include <vector>
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for number_properties
	/// </summary>
	public ref class number_properties : public System::Windows::Forms::Form
	{
	public:
		number_properties(void)
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
		~number_properties()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::TextBox^ textBox_number_a;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label_isprime;
	private: System::Windows::Forms::Label^ label_isperfect;
	private: System::Windows::Forms::Label^ label_factorials;
	private: System::Windows::Forms::Button^ button_check;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(number_properties::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->textBox_number_a = (gcnew System::Windows::Forms::TextBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_isprime = (gcnew System::Windows::Forms::Label());
			this->label_isperfect = (gcnew System::Windows::Forms::Label());
			this->label_factorials = (gcnew System::Windows::Forms::Label());
			this->button_check = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label_menu->Size = System::Drawing::Size(315, 34);
			this->label_menu->TabIndex = 4;
			this->label_menu->Text = L"Number Properties";
			// 
			// textBox_number_a
			// 
			this->textBox_number_a->Location = System::Drawing::Point(230, 46);
			this->textBox_number_a->Name = L"textBox_number_a";
			this->textBox_number_a->Size = System::Drawing::Size(93, 20);
			this->textBox_number_a->TabIndex = 15;
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(269, 191);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 16;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &number_properties::button_close_Click);
			// 
			// label_isprime
			// 
			this->label_isprime->AutoSize = true;
			this->label_isprime->Location = System::Drawing::Point(18, 52);
			this->label_isprime->Name = L"label_isprime";
			this->label_isprime->Size = System::Drawing::Size(0, 13);
			this->label_isprime->TabIndex = 17;
			// 
			// label_isperfect
			// 
			this->label_isperfect->AutoSize = true;
			this->label_isperfect->Location = System::Drawing::Point(18, 65);
			this->label_isperfect->Name = L"label_isperfect";
			this->label_isperfect->Size = System::Drawing::Size(0, 13);
			this->label_isperfect->TabIndex = 18;
			// 
			// label_factorials
			// 
			this->label_factorials->AutoSize = true;
			this->label_factorials->Location = System::Drawing::Point(18, 78);
			this->label_factorials->Name = L"label_factorials";
			this->label_factorials->Size = System::Drawing::Size(0, 13);
			this->label_factorials->TabIndex = 19;
			// 
			// button_check
			// 
			this->button_check->Location = System::Drawing::Point(230, 78);
			this->button_check->Name = L"button_check";
			this->button_check->Size = System::Drawing::Size(93, 36);
			this->button_check->TabIndex = 20;
			this->button_check->Text = L"check";
			this->button_check->UseVisualStyleBackColor = true;
			this->button_check->Click += gcnew System::EventHandler(this, &number_properties::button_check_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 104);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// number_properties
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 226);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_check);
			this->Controls->Add(this->label_factorials);
			this->Controls->Add(this->label_isperfect);
			this->Controls->Add(this->label_isprime);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->textBox_number_a);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"number_properties";
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
private: System::Void button_check_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_number_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		number_properties_class ^test = gcnew number_properties_class(textBox_number_a->Text);
		
		if(test->check_prime()==1)
		{
			label_isprime->Text = "Prime";
		}
		else
		{
			label_isprime->Text = "not Prime";
		}
		if (test->check_perfect() == 1)
		{
			label_isperfect->Text = "Perfect";
		}
		else
		{
			label_isperfect->Text = "not Perfect";
		}
		System::String^ f;
		f = "factorials: ";
		std::vector<int> g;
		g = test->factorial();
		for (unsigned int i = 0 ; i < g.size(); i++)
		{
			f = f + System::Convert::ToString(g[i]) + ", ";
		}
		label_factorials->Text = f->Remove(f->Length - 2);
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
