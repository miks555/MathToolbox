#pragma once
#include "errorclass.h"
#include "segments_points_lines_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for segments_points_lines
	/// </summary>
	public ref class segments_points_lines : public System::Windows::Forms::Form
	{
	public:
		segments_points_lines(void)
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
		~segments_points_lines()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picture_calc;
	private: System::Windows::Forms::Label^ label_main;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_segment_1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_length;
	private: System::Windows::Forms::Label^ label_center;
	private: System::Windows::Forms::TextBox^ textBox_a_1;
	private: System::Windows::Forms::TextBox^ textBox_b_2;
	private: System::Windows::Forms::TextBox^ textBox_b_1;
	private: System::Windows::Forms::TextBox^ textBox_a_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_C;
	private: System::Windows::Forms::TextBox^ textBox_B;
	private: System::Windows::Forms::TextBox^ textBox_point;
	private: System::Windows::Forms::TextBox^ textBox_A;
	private: System::Windows::Forms::Label^ label_ps;
	private: System::Windows::Forms::Label^ label_length_point_line;

	private: System::Windows::Forms::Label^ label_intersection;
	private: System::Windows::Forms::Label^ label_slope_1;
	private: System::Windows::Forms::Label^ label_slope_2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::TextBox^ textBox_segment_2;
	private: System::Windows::Forms::Label^ label12;
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
			System::Windows::Forms::Label^ label11;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(segments_points_lines::typeid));
			this->picture_calc = (gcnew System::Windows::Forms::PictureBox());
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_segment_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_length = (gcnew System::Windows::Forms::Label());
			this->label_center = (gcnew System::Windows::Forms::Label());
			this->textBox_a_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_C = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B = (gcnew System::Windows::Forms::TextBox());
			this->textBox_point = (gcnew System::Windows::Forms::TextBox());
			this->textBox_A = (gcnew System::Windows::Forms::TextBox());
			this->label_ps = (gcnew System::Windows::Forms::Label());
			this->label_length_point_line = (gcnew System::Windows::Forms::Label());
			this->label_intersection = (gcnew System::Windows::Forms::Label());
			this->label_slope_1 = (gcnew System::Windows::Forms::Label());
			this->label_slope_2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->textBox_segment_2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_calc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label11
			// 
			label11->AutoSize = true;
			label11->Location = System::Drawing::Point(233, 46);
			label11->Name = L"label11";
			label11->Size = System::Drawing::Size(149, 13);
			label11->TabIndex = 57;
			label11->Text = L"give coordinates of points: a,b";
			// 
			// picture_calc
			// 
			this->picture_calc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_calc.Image")));
			this->picture_calc->ImageLocation = L"";
			this->picture_calc->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_calc.InitialImage")));
			this->picture_calc->Location = System::Drawing::Point(12, 156);
			this->picture_calc->Name = L"picture_calc";
			this->picture_calc->Size = System::Drawing::Size(100, 90);
			this->picture_calc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_calc->TabIndex = 21;
			this->picture_calc->TabStop = false;
			// 
			// label_main
			// 
			this->label_main->AutoSize = true;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_main->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_main->Location = System::Drawing::Point(12, 9);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(358, 34);
			this->label_main->TabIndex = 22;
			this->label_main->Text = L"Segments Points Lines";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 101);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImageLocation = L"";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(126, 325);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(18, 17);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImageLocation = L"";
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(126, 156);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 90);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImageLocation = L"";
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(12, 252);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 90);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(230, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"length";
			// 
			// textBox_segment_1
			// 
			this->textBox_segment_1->Location = System::Drawing::Point(12, 63);
			this->textBox_segment_1->Name = L"textBox_segment_1";
			this->textBox_segment_1->Size = System::Drawing::Size(100, 20);
			this->textBox_segment_1->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(230, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"center";
			// 
			// label_length
			// 
			this->label_length->AutoSize = true;
			this->label_length->Location = System::Drawing::Point(274, 70);
			this->label_length->Name = L"label_length";
			this->label_length->Size = System::Drawing::Size(0, 13);
			this->label_length->TabIndex = 30;
			// 
			// label_center
			// 
			this->label_center->AutoSize = true;
			this->label_center->Location = System::Drawing::Point(274, 83);
			this->label_center->Name = L"label_center";
			this->label_center->Size = System::Drawing::Size(0, 13);
			this->label_center->TabIndex = 31;
			// 
			// textBox_a_1
			// 
			this->textBox_a_1->Location = System::Drawing::Point(245, 153);
			this->textBox_a_1->Name = L"textBox_a_1";
			this->textBox_a_1->Size = System::Drawing::Size(100, 20);
			this->textBox_a_1->TabIndex = 32;
			// 
			// textBox_b_2
			// 
			this->textBox_b_2->Location = System::Drawing::Point(245, 231);
			this->textBox_b_2->Name = L"textBox_b_2";
			this->textBox_b_2->Size = System::Drawing::Size(100, 20);
			this->textBox_b_2->TabIndex = 33;
			// 
			// textBox_b_1
			// 
			this->textBox_b_1->Location = System::Drawing::Point(245, 179);
			this->textBox_b_1->Name = L"textBox_b_1";
			this->textBox_b_1->Size = System::Drawing::Size(100, 20);
			this->textBox_b_1->TabIndex = 33;
			// 
			// textBox_a_2
			// 
			this->textBox_a_2->Location = System::Drawing::Point(245, 205);
			this->textBox_a_2->Name = L"textBox_a_2";
			this->textBox_a_2->Size = System::Drawing::Size(100, 20);
			this->textBox_a_2->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(226, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"a1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(226, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"a2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(226, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"b1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"b2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(160, 338);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 46;
			this->label7->Text = L"point";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(176, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 45;
			this->label8->Text = L"B";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(176, 309);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"C";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(176, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"A";
			// 
			// textBox_C
			// 
			this->textBox_C->Location = System::Drawing::Point(195, 309);
			this->textBox_C->Name = L"textBox_C";
			this->textBox_C->Size = System::Drawing::Size(100, 20);
			this->textBox_C->TabIndex = 42;
			// 
			// textBox_B
			// 
			this->textBox_B->Location = System::Drawing::Point(195, 283);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(100, 20);
			this->textBox_B->TabIndex = 40;
			// 
			// textBox_point
			// 
			this->textBox_point->Location = System::Drawing::Point(195, 335);
			this->textBox_point->Name = L"textBox_point";
			this->textBox_point->Size = System::Drawing::Size(100, 20);
			this->textBox_point->TabIndex = 41;
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(195, 257);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(100, 20);
			this->textBox_A->TabIndex = 39;
			// 
			// label_ps
			// 
			this->label_ps->AutoSize = true;
			this->label_ps->Location = System::Drawing::Point(351, 153);
			this->label_ps->Name = L"label_ps";
			this->label_ps->Size = System::Drawing::Size(0, 13);
			this->label_ps->TabIndex = 47;
			// 
			// label_length_point_line
			// 
			this->label_length_point_line->AutoSize = true;
			this->label_length_point_line->Location = System::Drawing::Point(343, 260);
			this->label_length_point_line->Name = L"label_length_point_line";
			this->label_length_point_line->Size = System::Drawing::Size(0, 13);
			this->label_length_point_line->TabIndex = 48;
			// 
			// label_intersection
			// 
			this->label_intersection->AutoSize = true;
			this->label_intersection->Location = System::Drawing::Point(351, 179);
			this->label_intersection->Name = L"label_intersection";
			this->label_intersection->Size = System::Drawing::Size(0, 13);
			this->label_intersection->TabIndex = 49;
			// 
			// label_slope_1
			// 
			this->label_slope_1->AutoSize = true;
			this->label_slope_1->Location = System::Drawing::Point(12, 233);
			this->label_slope_1->Name = L"label_slope_1";
			this->label_slope_1->Size = System::Drawing::Size(0, 13);
			this->label_slope_1->TabIndex = 50;
			// 
			// label_slope_2
			// 
			this->label_slope_2->AutoSize = true;
			this->label_slope_2->Location = System::Drawing::Point(123, 234);
			this->label_slope_2->Name = L"label_slope_2";
			this->label_slope_2->Size = System::Drawing::Size(0, 13);
			this->label_slope_2->TabIndex = 51;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 52;
			this->button1->Text = L"calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &segments_points_lines::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(377, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 53;
			this->button2->Text = L"check";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &segments_points_lines::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 332);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 54;
			this->button3->Text = L"calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &segments_points_lines::button3_Click);
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(461, 356);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 55;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &segments_points_lines::button_close_Click);
			// 
			// textBox_segment_2
			// 
			this->textBox_segment_2->Location = System::Drawing::Point(126, 63);
			this->textBox_segment_2->Name = L"textBox_segment_2";
			this->textBox_segment_2->Size = System::Drawing::Size(100, 20);
			this->textBox_segment_2->TabIndex = 56;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(301, 260);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 13);
			this->label12->TabIndex = 58;
			this->label12->Text = L"length";
			// 
			// segments_points_lines
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 387);
			this->Controls->Add(this->label12);
			this->Controls->Add(label11);
			this->Controls->Add(this->textBox_segment_2);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_slope_2);
			this->Controls->Add(this->label_slope_1);
			this->Controls->Add(this->label_intersection);
			this->Controls->Add(this->label_length_point_line);
			this->Controls->Add(this->label_ps);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_C);
			this->Controls->Add(this->textBox_B);
			this->Controls->Add(this->textBox_point);
			this->Controls->Add(this->textBox_A);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_a_2);
			this->Controls->Add(this->textBox_b_1);
			this->Controls->Add(this->textBox_b_2);
			this->Controls->Add(this->textBox_a_1);
			this->Controls->Add(this->label_center);
			this->Controls->Add(this->label_length);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_segment_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_main);
			this->Controls->Add(this->picture_calc);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"segments_points_lines";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_calc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	
		Form::Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox_segment_1->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_segment_2->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		
	    case_a^ inst_c = gcnew case_a(textBox_segment_1->Text, textBox_segment_2->Text);
		label_length->Text = System::Convert::ToString(inst_c->calculate_length());
		label_center->Text = inst_c->calculate_center();
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

	try {
		if (textBox_a_1->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_a_2->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_b_1->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_b_2->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		case_b^ inst_c = gcnew case_b(textBox_a_1->Text, textBox_b_1->Text, textBox_a_2->Text,textBox_b_2->Text);
		label_ps->Text = inst_c->ps();
		label_intersection->Text = inst_c->intersect();
		label_slope_1->Text = System::Convert::ToString(inst_c->calculate_slope_1());
		label_slope_2->Text = System::Convert::ToString(inst_c->calculate_slope_2());
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

	try {
		if (textBox_A->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_B->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_C->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_point->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		case_c^ inst_c = gcnew case_c(textBox_A->Text, textBox_B->Text, textBox_C->Text, textBox_point->Text);
		label_length_point_line->Text = System::Convert::ToString(inst_c->length());
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
