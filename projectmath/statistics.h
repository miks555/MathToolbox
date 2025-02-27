#pragma once
#include"statistics_class.h"
#include "errorclass.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for statistics
	/// </summary>
	public ref class statistics : public System::Windows::Forms::Form
	{
	public:
		statistics(void)
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
		~statistics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::TextBox^ textBox_data;
	private: System::Windows::Forms::ComboBox^ comboBox_select;
	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::TextBox^ textBox_out;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label_info;
	private: System::Windows::Forms::PictureBox^ picture_triangle;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(statistics::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->textBox_data = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_select = (gcnew System::Windows::Forms::ComboBox());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->textBox_out = (gcnew System::Windows::Forms::TextBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_info = (gcnew System::Windows::Forms::Label());
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
			this->label_menu->Size = System::Drawing::Size(159, 34);
			this->label_menu->TabIndex = 4;
			this->label_menu->Text = L"Statistics";
			// 
			// textBox_data
			// 
			this->textBox_data->Location = System::Drawing::Point(18, 46);
			this->textBox_data->Name = L"textBox_data";
			this->textBox_data->Size = System::Drawing::Size(100, 20);
			this->textBox_data->TabIndex = 5;
			// 
			// comboBox_select
			// 
			this->comboBox_select->FormattingEnabled = true;
			this->comboBox_select->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"moda", L"median", L"variance", L"standard deviation",
					L"mean", L"smallest element", L"largest element"
			});
			this->comboBox_select->Location = System::Drawing::Point(125, 44);
			this->comboBox_select->Name = L"comboBox_select";
			this->comboBox_select->Size = System::Drawing::Size(121, 21);
			this->comboBox_select->TabIndex = 6;
			// 
			// button_calc
			// 
			this->button_calc->Location = System::Drawing::Point(18, 73);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(75, 23);
			this->button_calc->TabIndex = 7;
			this->button_calc->Text = L"calculate";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &statistics::button_calc_Click);
			// 
			// textBox_out
			// 
			this->textBox_out->Location = System::Drawing::Point(125, 100);
			this->textBox_out->Name = L"textBox_out";
			this->textBox_out->ReadOnly = true;
			this->textBox_out->Size = System::Drawing::Size(100, 20);
			this->textBox_out->TabIndex = 8;
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(197, 226);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 9;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &statistics::button_close_Click);
			// 
			// label_info
			// 
			this->label_info->AutoSize = true;
			this->label_info->Location = System::Drawing::Point(99, 78);
			this->label_info->Name = L"label_info";
			this->label_info->Size = System::Drawing::Size(177, 13);
			this->label_info->TabIndex = 10;
			this->label_info->Text = L"enter elements separated by comma";
			// 
			// picture_triangle
			// 
			this->picture_triangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(12, 138);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(116, 111);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 36;
			this->picture_triangle->TabStop = false;
			// 
			// statistics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->label_info);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->textBox_out);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->comboBox_select);
			this->Controls->Add(this->textBox_data);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"statistics";
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
	private: System::Void button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (textBox_data->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			switch (comboBox_select->SelectedIndex)
			{
			case 0:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->moda());
				break;
			}
			case 1:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->median());
				break;
			}
			case 2:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->variance());
				break;
			}
			case 3:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->standard_deviation());
				break;
			}
			case 4:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->mean());
				break;
			}
			case 5:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->smallest_element());
				break;
			}
			case 6:
			{
				statistics_class^ instance_st = gcnew statistics_class(textBox_data->Text);
				textBox_out->Text = System::Convert::ToString(instance_st->largest_element());
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