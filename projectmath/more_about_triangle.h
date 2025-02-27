#pragma once
#include"errorclass.h"
#include "more_about_triangle_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for more_about_triangle
	/// </summary>
	public ref class more_about_triangle : public System::Windows::Forms::Form
	{
	public:
		more_about_triangle(void)
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
		~more_about_triangle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_main;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::PictureBox^ picture_triangle;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::TextBox^ textBox_up;
	private: System::Windows::Forms::TextBox^ textBox_left;
	private: System::Windows::Forms::TextBox^ textBox_right;



	private: System::Windows::Forms::TextBox^ textBox_out_ab;
	private: System::Windows::Forms::TextBox^ textBox_out_bc;
	private: System::Windows::Forms::TextBox^ textBox_out_ac;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_center;
	private: System::Windows::Forms::Label^ label_area;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(more_about_triangle::typeid));
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->picture_triangle = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->textBox_up = (gcnew System::Windows::Forms::TextBox());
			this->textBox_left = (gcnew System::Windows::Forms::TextBox());
			this->textBox_right = (gcnew System::Windows::Forms::TextBox());
			this->textBox_out_ab = (gcnew System::Windows::Forms::TextBox());
			this->textBox_out_bc = (gcnew System::Windows::Forms::TextBox());
			this->textBox_out_ac = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_center = (gcnew System::Windows::Forms::Label());
			this->label_area = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_main
			// 
			this->label_main->AutoSize = true;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_main->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_main->Location = System::Drawing::Point(12, 9);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(143, 34);
			this->label_main->TabIndex = 5;
			this->label_main->Text = L"Triangle";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(315, 1148);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 7;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &more_about_triangle::button_close_Click);
			// 
			// picture_triangle
			// 
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(140, 46);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(162, 163);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 19;
			this->picture_triangle->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(136, 261);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(230, 122);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(72, 20);
			this->textBox_b->TabIndex = 21;
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(129, 122);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(72, 20);
			this->textBox_a->TabIndex = 22;
			// 
			// textBox_c
			// 
			this->textBox_c->Location = System::Drawing::Point(184, 189);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(72, 20);
			this->textBox_c->TabIndex = 23;
			// 
			// textBox_up
			// 
			this->textBox_up->Location = System::Drawing::Point(180, 261);
			this->textBox_up->Name = L"textBox_up";
			this->textBox_up->Size = System::Drawing::Size(72, 20);
			this->textBox_up->TabIndex = 24;
			// 
			// textBox_left
			// 
			this->textBox_left->Location = System::Drawing::Point(117, 393);
			this->textBox_left->Name = L"textBox_left";
			this->textBox_left->Size = System::Drawing::Size(72, 20);
			this->textBox_left->TabIndex = 25;
			// 
			// textBox_right
			// 
			this->textBox_right->Location = System::Drawing::Point(254, 393);
			this->textBox_right->Name = L"textBox_right";
			this->textBox_right->Size = System::Drawing::Size(72, 20);
			this->textBox_right->TabIndex = 26;
			// 
			// textBox_out_ab
			// 
			this->textBox_out_ab->Location = System::Drawing::Point(184, 46);
			this->textBox_out_ab->Name = L"textBox_out_ab";
			this->textBox_out_ab->ReadOnly = true;
			this->textBox_out_ab->Size = System::Drawing::Size(72, 20);
			this->textBox_out_ab->TabIndex = 27;
			// 
			// textBox_out_bc
			// 
			this->textBox_out_bc->Location = System::Drawing::Point(278, 189);
			this->textBox_out_bc->Name = L"textBox_out_bc";
			this->textBox_out_bc->ReadOnly = true;
			this->textBox_out_bc->Size = System::Drawing::Size(72, 20);
			this->textBox_out_bc->TabIndex = 28;
			// 
			// textBox_out_ac
			// 
			this->textBox_out_ac->Location = System::Drawing::Point(83, 189);
			this->textBox_out_ac->Name = L"textBox_out_ac";
			this->textBox_out_ac->ReadOnly = true;
			this->textBox_out_ac->Size = System::Drawing::Size(72, 20);
			this->textBox_out_ac->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(338, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Center of a Triangle";
			// 
			// label_center
			// 
			this->label_center->AutoSize = true;
			this->label_center->Location = System::Drawing::Point(341, 278);
			this->label_center->Name = L"label_center";
			this->label_center->Size = System::Drawing::Size(0, 13);
			this->label_center->TabIndex = 31;
			// 
			// label_area
			// 
			this->label_area->AutoSize = true;
			this->label_area->Location = System::Drawing::Point(341, 303);
			this->label_area->Name = L"label_area";
			this->label_area->Size = System::Drawing::Size(0, 13);
			this->label_area->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(338, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Area";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(363, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &more_about_triangle::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(363, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &more_about_triangle::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(400, 710);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 36;
			this->button3->Text = L"close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &more_about_triangle::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(451, 428);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 37;
			this->button4->Text = L"close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &more_about_triangle::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"give the lengths of the sides";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(114, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"give coordinates of vertices: a,b";
			// 
			// more_about_triangle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(538, 463);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_area);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_center);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_out_ac);
			this->Controls->Add(this->textBox_out_bc);
			this->Controls->Add(this->textBox_out_ab);
			this->Controls->Add(this->textBox_right);
			this->Controls->Add(this->textBox_left);
			this->Controls->Add(this->textBox_up);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->textBox_a);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_main);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"more_about_triangle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_b->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_c->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		triangle_case_a^ inst_a = gcnew triangle_case_a(textBox_a->Text, textBox_b->Text, textBox_c->Text);
		textBox_out_ab->Text = System::Convert::ToString(inst_a->calculate_ab());
		textBox_out_ac->Text = System::Convert::ToString(inst_a->calculate_ac());
		textBox_out_bc->Text = System::Convert::ToString(inst_a->calculate_bc());
		label_area->Text = System::Convert::ToString(inst_a->calculate_area());
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_left->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_up->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_right->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		triangle_case_b^ inst_b = gcnew triangle_case_b(textBox_up->Text, textBox_left->Text, textBox_right->Text);
		label_area->Text = inst_b->area();
		label_center->Text = inst_b->center();
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
};
}
