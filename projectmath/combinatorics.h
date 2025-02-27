#pragma once
#include "errorclass.h"
#include "combinatorics_class.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for combinatorics
	/// </summary>
	public ref class combinatorics : public System::Windows::Forms::Form
	{
	public:
		combinatorics(void)
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
		~combinatorics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::TextBox^ textBox_k;
	private: System::Windows::Forms::Label^ label_places;
	private: System::Windows::Forms::Label^ label_elements;
	private: System::Windows::Forms::Button^ button_calculate;
	private: System::Windows::Forms::TextBox^ textBox_out;
	private: System::Windows::Forms::ComboBox^ comboBox_select;

	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(combinatorics::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label_places = (gcnew System::Windows::Forms::Label());
			this->label_elements = (gcnew System::Windows::Forms::Label());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->textBox_out = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_select = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->label_menu->Size = System::Drawing::Size(241, 34);
			this->label_menu->TabIndex = 5;
			this->label_menu->Text = L"Combinatorics";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(286, 215);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 26;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &combinatorics::button_close_Click);
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(95, 46);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(100, 20);
			this->textBox_n->TabIndex = 27;
			// 
			// textBox_k
			// 
			this->textBox_k->Location = System::Drawing::Point(95, 72);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(100, 20);
			this->textBox_k->TabIndex = 28;
			// 
			// label_places
			// 
			this->label_places->AutoSize = true;
			this->label_places->Location = System::Drawing::Point(51, 79);
			this->label_places->Name = L"label_places";
			this->label_places->Size = System::Drawing::Size(38, 13);
			this->label_places->TabIndex = 29;
			this->label_places->Text = L"places";
			// 
			// label_elements
			// 
			this->label_elements->AutoSize = true;
			this->label_elements->Location = System::Drawing::Point(40, 53);
			this->label_elements->Name = L"label_elements";
			this->label_elements->Size = System::Drawing::Size(49, 13);
			this->label_elements->TabIndex = 30;
			this->label_elements->Text = L"elements";
			// 
			// button_calculate
			// 
			this->button_calculate->Location = System::Drawing::Point(95, 98);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(75, 23);
			this->button_calculate->TabIndex = 31;
			this->button_calculate->Text = L"calculate";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &combinatorics::button_calculate_Click);
			// 
			// textBox_out
			// 
			this->textBox_out->Location = System::Drawing::Point(202, 127);
			this->textBox_out->Name = L"textBox_out";
			this->textBox_out->Size = System::Drawing::Size(100, 20);
			this->textBox_out->TabIndex = 32;
			// 
			// comboBox_select
			// 
			this->comboBox_select->FormattingEnabled = true;
			this->comboBox_select->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"variations with repeats", L"variations without repeats",
					L"combinations"
			});
			this->comboBox_select->Location = System::Drawing::Point(202, 70);
			this->comboBox_select->Name = L"comboBox_select";
			this->comboBox_select->Size = System::Drawing::Size(154, 21);
			this->comboBox_select->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(183, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"=";
			// 
			// picture_triangle
			// 
			this->picture_triangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(12, 127);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(116, 111);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 35;
			this->picture_triangle->TabStop = false;
			// 
			// combinatorics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 250);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_select);
			this->Controls->Add(this->textBox_out);
			this->Controls->Add(this->button_calculate);
			this->Controls->Add(this->label_elements);
			this->Controls->Add(this->label_places);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->textBox_n);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"combinatorics";
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
	private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
			try{
				if (textBox_n->Text->Length == 0)
				{
					error^ a = gcnew error(empty, "empty_box");
					throw a;
				}
				if (textBox_n->Text->Length == 0)
				{
					error^ a = gcnew error(empty, "empty_box");
					throw a;
				}
				switch (comboBox_select->SelectedIndex)
				{
				case 0:
				{
					combinatorics_class^ operation = gcnew combinatorics_class(textBox_n->Text, textBox_k->Text);
					textBox_out->Text = System::Convert::ToString(operation->variations_with_repeats());
					break;
				}
				case 1:
				{
					combinatorics_class^ operation = gcnew combinatorics_class(textBox_n->Text, textBox_k->Text);
					textBox_out->Text = System::Convert::ToString(operation->variations_without_repeats());
					break;
				}
				case 2:
				{
					combinatorics_class^ operation = gcnew combinatorics_class(textBox_n->Text, textBox_k->Text);
					textBox_out->Text = System::Convert::ToString(operation->combinations());
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
};
