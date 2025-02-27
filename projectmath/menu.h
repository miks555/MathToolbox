#pragma once
#include"errorclass.h"
#include "simple_operations.h"
#include "advanced_operations.h"
#include "number_properties.h"
#include "trigonometry.h"
#include "combinatorics.h"
#include "statistics.h"
#include "figures_and_solids.h"
#include "more_about_triangle.h"
#include "segments_points_lines.h"
#include "fibonacci_sequence.h"
#include "polynomial.h"
#include "number_system_conversion.h"
#include "quadratic_function.h"
#include "mathematical_tables.h"
#include "complex.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listbox_menu;
	private: System::Windows::Forms::Label^ label_legal;
	private: System::Windows::Forms::Button^ button_open;
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_exit;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->listbox_menu = (gcnew System::Windows::Forms::ListBox());
			this->label_legal = (gcnew System::Windows::Forms::Label());
			this->button_open = (gcnew System::Windows::Forms::Button());
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listbox_menu
			// 
			this->listbox_menu->FormattingEnabled = true;
			this->listbox_menu->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"simple operations", L"advanced operations",
					L"number properties", L"trigonometry", L"combinatorics", L"statistics", L"figures and solids", L"more about triangle", L"segments points lines",
					L"fibonacci sequence", L"quadratic function", L"polynomial", L"number system conversion", L"mathematical tables", L"complex numbers"
			});
			this->listbox_menu->Location = System::Drawing::Point(12, 47);
			this->listbox_menu->Name = L"listbox_menu";
			this->listbox_menu->ScrollAlwaysVisible = true;
			this->listbox_menu->Size = System::Drawing::Size(148, 121);
			this->listbox_menu->TabIndex = 0;
			// 
			// label_legal
			// 
			this->label_legal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label_legal->AutoSize = true;
			this->label_legal->ForeColor = System::Drawing::Color::MediumBlue;
			this->label_legal->Location = System::Drawing::Point(12, 239);
			this->label_legal->Name = L"label_legal";
			this->label_legal->Size = System::Drawing::Size(53, 13);
			this->label_legal->TabIndex = 1;
			this->label_legal->Text = L"Legal info";
			this->label_legal->Click += gcnew System::EventHandler(this, &menu::label_legal_Click);
			// 
			// button_open
			// 
			this->button_open->ForeColor = System::Drawing::Color::Black;
			this->button_open->Location = System::Drawing::Point(166, 89);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(102, 46);
			this->button_open->TabIndex = 2;
			this->button_open->Text = L"open";
			this->button_open->UseVisualStyleBackColor = true;
			this->button_open->Click += gcnew System::EventHandler(this, &menu::button_open_Click);
			// 
			// label_menu
			// 
			this->label_menu->AutoSize = true;
			this->label_menu->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18.25F));
			this->label_menu->Location = System::Drawing::Point(12, 9);
			this->label_menu->Name = L"label_menu";
			this->label_menu->Size = System::Drawing::Size(98, 34);
			this->label_menu->TabIndex = 3;
			this->label_menu->Text = L"Menu";
			// 
			// button_exit
			// 
			this->button_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_exit->ForeColor = System::Drawing::Color::Black;
			this->button_exit->Location = System::Drawing::Point(267, 229);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(45, 23);
			this->button_exit->TabIndex = 4;
			this->button_exit->Text = L"exit";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &menu::button_exit_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 261);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label_menu);
			this->Controls->Add(this->button_open);
			this->Controls->Add(this->label_legal);
			this->Controls->Add(this->listbox_menu);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label_legal_Click(System::Object^ sender, System::EventArgs^ e) {
		if(MessageBox::Show("All images shown here are from pixabay service and are licensed by it, do you want to read license?", "Legal info", MessageBoxButtons::YesNo, MessageBoxIcon::Information)== System::Windows::Forms::DialogResult::Yes)
		{ 
		System::Diagnostics::Process::Start("https://pixabay.com/service/terms/#license");
		}
	}
	private: System::Void button_open_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			switch (listbox_menu->SelectedIndex)
			{
			case 0:
			{
				simple_operations^ so_instance = gcnew simple_operations;
				so_instance->Show();
				break;
			}
			case 1:
			{
				advanced_operations^ ao_instance = gcnew advanced_operations;
				ao_instance->Show();
				break;
			}
			case 2:
			{
				number_properties^ np_instance = gcnew number_properties;
				np_instance->Show();
				break;
			}
			case 3:
			{
				trigonometry^ tr_instance = gcnew trigonometry;
				tr_instance->Show();
				break;
			}
			case 4:
			{
				combinatorics^ co_instance = gcnew combinatorics;
				co_instance->Show();
				break;
			}
			case 5 :
			{
				statistics^ st_instance = gcnew statistics;
				st_instance->Show();
				break;
			}
			case 6:
			{
				figures_and_solids^ fs_instance = gcnew figures_and_solids;
				fs_instance->Show();
				break;
			}
			case 7:
			{
				more_about_triangle^ tr_instance = gcnew more_about_triangle;
				tr_instance->Show();
				break;
			}
			case 8:
			{
				segments_points_lines^ s_instance = gcnew segments_points_lines;
				s_instance->Show();
				break;
			}
			case 9:
			{
				fibonacci_sequence^f_instance = gcnew fibonacci_sequence;
				f_instance->Show();
				break;
			}
			case 10:
			{
				quadratic_function^ q_instance = gcnew quadratic_function;
				q_instance->Show();
				break;
			}
			case 11:
			{
				polynomial^ p_instance = gcnew polynomial;
				p_instance->Show();
				break;
			}
			case 12:
			{
				number_system_conversion^ sys_instance = gcnew number_system_conversion;
				sys_instance->Show();
				break;
			}
			case 13:
			{
				mathematical_tables^ m_instance = gcnew mathematical_tables;
				m_instance->Show();
				break;
			}
			case 14:
			{
				complex^ c_instance = gcnew complex;
				c_instance->Show();
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
		catch (error ^a)
		{
			MessageBox::Show("error " + System::Convert::ToString(a->getNum()) + " has occurred :" + a->getDesc(), "error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}  
		catch (...)
		{
			MessageBox::Show("unknown error has occurred" , "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}