#pragma once
#include"errorclass.h"
#include "complex_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for complex
	/// </summary>
	public ref class complex : public System::Windows::Forms::Form
	{
	public:
		complex(void)
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
		~complex()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label_main;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_z1_re;
	private: System::Windows::Forms::TextBox^ textBox_z1_im;
	private: System::Windows::Forms::TextBox^ textBox_z2_re;
	private: System::Windows::Forms::TextBox^ textBox_z2_im;
	private: System::Windows::Forms::TextBox^ textBox_z3_re;
	private: System::Windows::Forms::TextBox^ textBox_z3_im;
	private: System::Windows::Forms::Button^ button_calculate;
	private: System::Windows::Forms::Panel^ panel;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_cov_r;
	private: System::Windows::Forms::TextBox^ textBox_cov_a;
	private: System::Windows::Forms::TextBox^ textBox_cov_out;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox_operator;


	private: System::Windows::Forms::Button^ button_convert;
	private: System::Windows::Forms::Label^ label_max;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(complex::typeid));
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_z1_re = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z1_im = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z2_re = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z2_im = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z3_re = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z3_im = (gcnew System::Windows::Forms::TextBox());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_cov_r = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cov_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cov_out = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox_operator = (gcnew System::Windows::Forms::ComboBox());
			this->button_convert = (gcnew System::Windows::Forms::Button());
			this->label_max = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(580, 426);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 8;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &complex::button_close_Click);
			// 
			// label_main
			// 
			this->label_main->AutoSize = true;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_main->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_main->Location = System::Drawing::Point(12, 9);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(298, 34);
			this->label_main->TabIndex = 9;
			this->label_main->Text = L"Complex numbers";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(16, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Z1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(15, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Z2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(15, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Z3:";
			// 
			// textBox_z1_re
			// 
			this->textBox_z1_re->Location = System::Drawing::Point(45, 61);
			this->textBox_z1_re->Name = L"textBox_z1_re";
			this->textBox_z1_re->Size = System::Drawing::Size(82, 20);
			this->textBox_z1_re->TabIndex = 13;
			// 
			// textBox_z1_im
			// 
			this->textBox_z1_im->Location = System::Drawing::Point(133, 61);
			this->textBox_z1_im->Name = L"textBox_z1_im";
			this->textBox_z1_im->Size = System::Drawing::Size(82, 20);
			this->textBox_z1_im->TabIndex = 14;
			// 
			// textBox_z2_re
			// 
			this->textBox_z2_re->Location = System::Drawing::Point(45, 87);
			this->textBox_z2_re->Name = L"textBox_z2_re";
			this->textBox_z2_re->Size = System::Drawing::Size(82, 20);
			this->textBox_z2_re->TabIndex = 15;
			// 
			// textBox_z2_im
			// 
			this->textBox_z2_im->Location = System::Drawing::Point(133, 87);
			this->textBox_z2_im->Name = L"textBox_z2_im";
			this->textBox_z2_im->Size = System::Drawing::Size(82, 20);
			this->textBox_z2_im->TabIndex = 16;
			// 
			// textBox_z3_re
			// 
			this->textBox_z3_re->Location = System::Drawing::Point(45, 113);
			this->textBox_z3_re->Name = L"textBox_z3_re";
			this->textBox_z3_re->ReadOnly = true;
			this->textBox_z3_re->Size = System::Drawing::Size(82, 20);
			this->textBox_z3_re->TabIndex = 17;
			// 
			// textBox_z3_im
			// 
			this->textBox_z3_im->Location = System::Drawing::Point(133, 113);
			this->textBox_z3_im->Name = L"textBox_z3_im";
			this->textBox_z3_im->ReadOnly = true;
			this->textBox_z3_im->Size = System::Drawing::Size(82, 20);
			this->textBox_z3_im->TabIndex = 18;
			// 
			// button_calculate
			// 
			this->button_calculate->Location = System::Drawing::Point(221, 111);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(75, 23);
			this->button_calculate->TabIndex = 19;
			this->button_calculate->Text = L"calculate";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &complex::button_calculate_Click);
			// 
			// panel
			// 
			this->panel->Location = System::Drawing::Point(45, 139);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(300, 300);
			this->panel->TabIndex = 20;
			this->panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &complex::panel_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(336, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Polar to complex converter";
			// 
			// textBox_cov_r
			// 
			this->textBox_cov_r->Location = System::Drawing::Point(339, 77);
			this->textBox_cov_r->Name = L"textBox_cov_r";
			this->textBox_cov_r->Size = System::Drawing::Size(82, 20);
			this->textBox_cov_r->TabIndex = 22;
			// 
			// textBox_cov_a
			// 
			this->textBox_cov_a->Location = System::Drawing::Point(446, 77);
			this->textBox_cov_a->Name = L"textBox_cov_a";
			this->textBox_cov_a->Size = System::Drawing::Size(82, 20);
			this->textBox_cov_a->TabIndex = 23;
			// 
			// textBox_cov_out
			// 
			this->textBox_cov_out->Location = System::Drawing::Point(339, 103);
			this->textBox_cov_out->Name = L"textBox_cov_out";
			this->textBox_cov_out->ReadOnly = true;
			this->textBox_cov_out->Size = System::Drawing::Size(214, 20);
			this->textBox_cov_out->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(320, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"r";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(427, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"a";
			// 
			// comboBox_operator
			// 
			this->comboBox_operator->FormattingEnabled = true;
			this->comboBox_operator->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox_operator->Location = System::Drawing::Point(221, 86);
			this->comboBox_operator->Name = L"comboBox_operator";
			this->comboBox_operator->Size = System::Drawing::Size(74, 21);
			this->comboBox_operator->TabIndex = 28;
			// 
			// button_convert
			// 
			this->button_convert->Location = System::Drawing::Point(559, 100);
			this->button_convert->Name = L"button_convert";
			this->button_convert->Size = System::Drawing::Size(75, 23);
			this->button_convert->TabIndex = 31;
			this->button_convert->Text = L"convert";
			this->button_convert->UseVisualStyleBackColor = true;
			this->button_convert->Click += gcnew System::EventHandler(this, &complex::button_convert_Click);
			// 
			// label_max
			// 
			this->label_max->AutoSize = true;
			this->label_max->Location = System::Drawing::Point(352, 279);
			this->label_max->Name = L"label_max";
			this->label_max->Size = System::Drawing::Size(0, 13);
			this->label_max->TabIndex = 32;
			// 
			// complex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 461);
			this->Controls->Add(this->label_max);
			this->Controls->Add(this->button_convert);
			this->Controls->Add(this->comboBox_operator);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_cov_out);
			this->Controls->Add(this->textBox_cov_a);
			this->Controls->Add(this->textBox_cov_r);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->button_calculate);
			this->Controls->Add(this->textBox_z3_im);
			this->Controls->Add(this->textBox_z3_re);
			this->Controls->Add(this->textBox_z2_im);
			this->Controls->Add(this->textBox_z2_re);
			this->Controls->Add(this->textBox_z1_im);
			this->Controls->Add(this->textBox_z1_re);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_main);
			this->Controls->Add(this->button_close);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"complex";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}

private: System::Void button_convert_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_cov_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_cov_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		converter^ ins = gcnew converter(textBox_cov_r->Text, textBox_cov_a->Text);
		textBox_cov_out->Text = ins->convert();
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

	   array<System::Drawing::PointF>^ points_z1 = gcnew array <System::Drawing::PointF>(2);
	   array<System::Drawing::PointF>^ points_z2 = gcnew array <System::Drawing::PointF>(2);
	   array<System::Drawing::PointF>^ points_z3 = gcnew array <System::Drawing::PointF>(2);
	   Pen^ pen_1;
	   Pen^ pen_2;
	   Pen^ pen_3;
	   int clicked = 0;
private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_z1_re->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_z1_im->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_z2_re->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_z2_im->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		
		complex_num^ z1 = gcnew complex_num(textBox_z1_re->Text, textBox_z1_im->Text);
		complex_num^ z2 = gcnew complex_num(textBox_z2_re->Text, textBox_z2_im->Text);
		complex_num^ z3;
		switch (comboBox_operator->SelectedIndex)
		{
		case 0:
		{
			z3 = z1 + z2;
			textBox_z3_re->Text = System::Convert::ToString(z3->show_real());
			textBox_z3_im->Text = System::Convert::ToString(z3->show_img());
			break;
		}
		case 1:
		{
			z3 = z1 - z2;
			textBox_z3_re->Text = System::Convert::ToString(z3->show_real());
			textBox_z3_im->Text = System::Convert::ToString(z3->show_img());
			break;
		}
		case 2:
		{
			z3 = z1 * z2;
			textBox_z3_re->Text = System::Convert::ToString(z3->show_real());
			textBox_z3_im->Text = System::Convert::ToString(z3->show_img());
			break;
		}
		case 3:
		{
			z3 = z1 / z2;
			textBox_z3_re->Text = System::Convert::ToString(z3->show_real());
			textBox_z3_im->Text = System::Convert::ToString(z3->show_img());
			break;
		}
		default:
		{
			error^ a = gcnew error(nothing_sel, "please select first");
			throw a;
			break;
		}
		}
		//////////////////////
		double* var = new double[3];
		int* sel = new int[3];
		sel[0] = 1;
		sel[1] = 2;
		sel[2] = 3;
		var[0] = z1->module();
		var[1] = z2->module();
		var[2] = z3->module();
		for (int i = 0; i < 2; i++) {
			if (var[i] < var[i + 1]) {
				double gg = var[i];
				int hh = sel[i];
				var[i] = var[i + 1];
				var[i + 1] = gg;
				sel[i] = sel[i + 1];
				sel[i + 1] = hh;
				if (i > 0) {
					i = i - 2;
				}
			}
		}
		label_max->Text = System::Convert::ToString(var[0]);
		/////////////draw
		if (sel[0] == 1)
		{
			points_z1[0].X = Convert::ToSingle(150);
			points_z1[0].Y = Convert::ToSingle(150);
			points_z1[1].X = Convert::ToSingle((z1->show_real() * 150 / var[0]) + 150);
			points_z1[1].Y = Convert::ToSingle((-1.0) * (z1->show_img() * 150 / var[0]) + 150);
			pen_1=gcnew Pen(System::Drawing::Color::Red);
		}
		if (sel[0] == 2)
		{
			points_z1[0].X = Convert::ToSingle(150);
			points_z1[0].Y = Convert::ToSingle(150);
			points_z1[1].X = Convert::ToSingle((z2->show_real() * 150 / var[0]) + 150);
			points_z1[1].Y = Convert::ToSingle((-1.0) * (z2->show_img() * 150 / var[0]) + 150);
			pen_1 = gcnew Pen(System::Drawing::Color::Green);
		}
		if (sel[0] == 3)
		{
			points_z1[0].X = Convert::ToSingle(150);
			points_z1[0].Y = Convert::ToSingle(150);
			points_z1[1].X = Convert::ToSingle((z3->show_real() * 150 / var[0]) + 150);
			points_z1[1].Y = Convert::ToSingle((-1.0) * (z3->show_img() * 150 / var[0]) + 150);
			pen_1 = gcnew Pen(System::Drawing::Color::Blue);
		}
		if (sel[1] == 1)
		{
			points_z2[0].X = Convert::ToSingle(150);
			points_z2[0].Y = Convert::ToSingle(150);
			points_z2[1].X = Convert::ToSingle((z1->show_real() * 150 / var[0]) + 150);
			points_z2[1].Y = Convert::ToSingle((-1.0) * (z1->show_img() * 150 / var[0]) + 150);
			pen_2 = gcnew Pen(System::Drawing::Color::Red);
		}
		if (sel[1] == 2)
		{
			points_z2[0].X = Convert::ToSingle(150);
			points_z2[0].Y = Convert::ToSingle(150);
			points_z2[1].X = Convert::ToSingle((z2->show_real() * 150 / var[0]) + 150);
			points_z2[1].Y = Convert::ToSingle((-1.0) * (z2->show_img() * 150 / var[0]) + 150);
			pen_2 = gcnew Pen(System::Drawing::Color::Green);
		}
		if (sel[1] == 3)
		{
			points_z2[0].X = Convert::ToSingle(150);
			points_z2[0].Y = Convert::ToSingle(150);
			points_z2[1].X = Convert::ToSingle((z3->show_real() * 150 / var[0]) + 150);
			points_z2[1].Y = Convert::ToSingle((-1.0) * (z3->show_img() * 150 / var[0]) + 150);
			pen_2 = gcnew Pen(System::Drawing::Color::Blue);
		}
		if (sel[2] == 1)
		{
			points_z3[0].X = Convert::ToSingle(150);
			points_z3[0].Y = Convert::ToSingle(150);
			points_z3[1].X = Convert::ToSingle((z1->show_real() * 150 / var[0]) + 150);
			points_z3[1].Y = Convert::ToSingle((-1.0) * (z1->show_img() * 150 / var[0]) + 150);
			pen_3 = gcnew Pen(System::Drawing::Color::Red);
		}
		if (sel[2] == 2)
		{
			points_z3[0].X = Convert::ToSingle(150);
			points_z3[0].Y = Convert::ToSingle(150);
			points_z3[1].X = Convert::ToSingle((z2->show_real() * 150 / var[0]) + 150);
			points_z3[1].Y = Convert::ToSingle((-1.0) * (z2->show_img() * 150 / var[0]) + 150);
			pen_3 = gcnew Pen(System::Drawing::Color::Green);
		}
		if (sel[2] == 3)
		{
			points_z3[0].X = Convert::ToSingle(150);
			points_z3[0].Y = Convert::ToSingle(150);
			points_z3[1].X = Convert::ToSingle((z3->show_real() * 150 / var[0]) + 150);
			points_z3[1].Y = Convert::ToSingle((-1.0) * (z3->show_img() * 150 / var[0]) + 150);
			pen_3 = gcnew Pen(System::Drawing::Color::Blue);
		}
		clicked = 1;
		panel->Refresh();
		
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
private: System::Void panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Graphics^ draw = panel->CreateGraphics();
    draw->Clear(System::Drawing::Color::FromName("Control"));
	Pen^ pen_0 = gcnew Pen(System::Drawing::Color::Black);
	if (clicked == 0)
	{
		pen_1 = gcnew Pen(System::Drawing::Color::Black);
		pen_2 = gcnew Pen(System::Drawing::Color::Black);
		pen_3 = gcnew Pen(System::Drawing::Color::Black);
	}
	array<System::Drawing::PointF>^ points_x = gcnew array <System::Drawing::PointF>(2);
	points_x[0].X = Convert::ToSingle(0);
	points_x[0].Y = Convert::ToSingle(150);
	points_x[1].X = Convert::ToSingle("299");
	points_x[1].Y = Convert::ToSingle("150");
	array<System::Drawing::PointF>^ points_y = gcnew array <System::Drawing::PointF>(2);
	points_y[0].X = Convert::ToSingle("150");
	points_y[0].Y = Convert::ToSingle("0");
	points_y[1].X = Convert::ToSingle("150");
	points_y[1].Y = Convert::ToSingle("299");
	draw->DrawCurve(pen_0, points_x);
	draw->DrawCurve(pen_0, points_y);
	//////////////////////////////////////////
	draw->DrawCurve(pen_1, points_z1);
	draw->DrawCurve(pen_2, points_z2);
	draw->DrawCurve(pen_3, points_z3);
}
};
}
