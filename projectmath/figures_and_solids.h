#pragma once
#include"figures_and_solids_class.h"
#include"errorclass.h"
namespace projectmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for figures_and_solids
	/// </summary>
	public ref class figures_and_solids : public System::Windows::Forms::Form
	{
	public:
		figures_and_solids(void)
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
		~figures_and_solids()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::PictureBox^ picture_triangle;
	private: System::Windows::Forms::PictureBox^ picture_trapezoid;
	private: System::Windows::Forms::PictureBox^ pictureBox_rec;
	private: System::Windows::Forms::PictureBox^ pictureBox_parallelogram;
	private: System::Windows::Forms::PictureBox^ pictureBox_rhombus;
	private: System::Windows::Forms::PictureBox^ pictureBox_deltoid;
	private: System::Windows::Forms::PictureBox^ pictureBox_circle;
	private: System::Windows::Forms::PictureBox^ pictureBox_circle_slice;
	private: System::Windows::Forms::PictureBox^ pictureBox_cuboid;
	private: System::Windows::Forms::PictureBox^ pictureBox_pyramid;
	private: System::Windows::Forms::PictureBox^ pictureBox_prism;
	private: System::Windows::Forms::PictureBox^ pictureBox_cylinder;
	private: System::Windows::Forms::PictureBox^ pictureBox_cone;
	private: System::Windows::Forms::PictureBox^ pictureBox_ball;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_triangle_a;
	private: System::Windows::Forms::TextBox^ textBox_triangle_h;


	private: System::Windows::Forms::Button^ button_triangle;
	private: System::Windows::Forms::TextBox^ textBox_triangle_out;

	private: System::Windows::Forms::TextBox^ textBox_trapezoid_a;
	private: System::Windows::Forms::TextBox^ textBox_trapezoid_b;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_trapezoid_h;
	private: System::Windows::Forms::Button^ button_trapezoid;
	private: System::Windows::Forms::TextBox^ textBox_trapezoid_out;
	private: System::Windows::Forms::TextBox^ textBox_rectangle_a;
	private: System::Windows::Forms::TextBox^ textBox_rectangle_b;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_rectangle;
	private: System::Windows::Forms::TextBox^ textBox_rectangle_out;
	private: System::Windows::Forms::TextBox^ textBox_parallelogram_a;
	private: System::Windows::Forms::TextBox^ textBox_parallelogram_h;
	private: System::Windows::Forms::Button^ button_parallelogram;
	private: System::Windows::Forms::TextBox^ textBox_parallelogram_out;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_rhombus_a;
	private: System::Windows::Forms::TextBox^ textBox_rhombus_h;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button_rhombus;
	private: System::Windows::Forms::TextBox^ textBox_rhombus_out;

	private: System::Windows::Forms::TextBox^ textBox_deltoid_d1;
	private: System::Windows::Forms::TextBox^ textBox_deltoid_d2;
	private: System::Windows::Forms::Button^ button_deltoid;
	private: System::Windows::Forms::TextBox^ textBox_deltoid_out;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_circle_r;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button_circle;
	private: System::Windows::Forms::TextBox^ textBox_circle_out_area;
	private: System::Windows::Forms::TextBox^ textBox_circle_out_dimension;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox_circle_slice_r;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_circle_slice_a;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button_circle_slice;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox_circle_slice_out_dimension;
	private: System::Windows::Forms::TextBox^ textBox_circle_slice_out_area;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_a;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_b;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_c;
	private: System::Windows::Forms::Button^ button_cuboid;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_out_area;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_out_volume;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox_cuboid_out_diagonal;
	private: System::Windows::Forms::TextBox^ textBox_prism_ba;
	private: System::Windows::Forms::TextBox^ textBox_prism_h;
	private: System::Windows::Forms::TextBox^ textBox_prism_bc;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Button^ button_prism;
	private: System::Windows::Forms::TextBox^ textBox_prism_out_area;
	private: System::Windows::Forms::TextBox^ textBox_prism_out_volume;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox_pyramid_ba;
private: System::Windows::Forms::TextBox^ textBox_pyramid_h;
private: System::Windows::Forms::TextBox^ textBox_pyramid_la;
private: System::Windows::Forms::Button^ button_pyramid;




private: System::Windows::Forms::TextBox^ textBox_pyramid_out_area;
private: System::Windows::Forms::TextBox^ textBox_pyramid_out_volume;


	private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox_cylinder_r;
private: System::Windows::Forms::TextBox^ textBox_cylinder_h;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Button^ button_cylinder;
private: System::Windows::Forms::TextBox^ textBox_cylinder_out_volume;
private: System::Windows::Forms::TextBox^ textBox_cylinder_out_area;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBox_cone_r;
private: System::Windows::Forms::TextBox^ textBox_cone_h;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Button^ button_cone;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox_cone_out_area;
private: System::Windows::Forms::TextBox^ textBox_cone_out_volume;
private: System::Windows::Forms::TextBox^ textBox_ball_r;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Button^ button_ball;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox_ball_out_area;
private: System::Windows::Forms::TextBox^ textBox_ball_out_volume;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(figures_and_solids::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->picture_triangle = (gcnew System::Windows::Forms::PictureBox());
			this->picture_trapezoid = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_rec = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_parallelogram = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_rhombus = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_deltoid = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_circle = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_circle_slice = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_cuboid = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_pyramid = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_prism = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_cylinder = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_cone = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_ball = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_triangle_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_triangle_h = (gcnew System::Windows::Forms::TextBox());
			this->button_triangle = (gcnew System::Windows::Forms::Button());
			this->textBox_triangle_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox_trapezoid_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_trapezoid_b = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_trapezoid_h = (gcnew System::Windows::Forms::TextBox());
			this->button_trapezoid = (gcnew System::Windows::Forms::Button());
			this->textBox_trapezoid_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rectangle_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rectangle_b = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_rectangle = (gcnew System::Windows::Forms::Button());
			this->textBox_rectangle_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox_parallelogram_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_parallelogram_h = (gcnew System::Windows::Forms::TextBox());
			this->button_parallelogram = (gcnew System::Windows::Forms::Button());
			this->textBox_parallelogram_out = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_rhombus_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rhombus_h = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button_rhombus = (gcnew System::Windows::Forms::Button());
			this->textBox_rhombus_out = (gcnew System::Windows::Forms::TextBox());
			this->textBox_deltoid_d1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_deltoid_d2 = (gcnew System::Windows::Forms::TextBox());
			this->button_deltoid = (gcnew System::Windows::Forms::Button());
			this->textBox_deltoid_out = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox_circle_r = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button_circle = (gcnew System::Windows::Forms::Button());
			this->textBox_circle_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_circle_out_dimension = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox_circle_slice_r = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_circle_slice_a = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button_circle_slice = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox_circle_slice_out_dimension = (gcnew System::Windows::Forms::TextBox());
			this->textBox_circle_slice_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cuboid_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cuboid_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cuboid_c = (gcnew System::Windows::Forms::TextBox());
			this->button_cuboid = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox_cuboid_out_area = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox_cuboid_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox_cuboid_out_diagonal = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prism_ba = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prism_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prism_bc = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button_prism = (gcnew System::Windows::Forms::Button());
			this->textBox_prism_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prism_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox_pyramid_ba = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pyramid_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pyramid_la = (gcnew System::Windows::Forms::TextBox());
			this->button_pyramid = (gcnew System::Windows::Forms::Button());
			this->textBox_pyramid_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pyramid_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox_cylinder_r = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cylinder_h = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button_cylinder = (gcnew System::Windows::Forms::Button());
			this->textBox_cylinder_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cylinder_out_area = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox_cone_r = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cone_h = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button_cone = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox_cone_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cone_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ball_r = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button_ball = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox_ball_out_area = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ball_out_volume = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_trapezoid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_parallelogram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rhombus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_deltoid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_circle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_circle_slice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cuboid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pyramid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_prism))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cylinder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cone))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_ball))->BeginInit();
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
			this->label_menu->Size = System::Drawing::Size(292, 34);
			this->label_menu->TabIndex = 4;
			this->label_menu->Text = L"Figures and solids";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->Location = System::Drawing::Point(-93, 32767);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(75, 23);
			this->button_close->TabIndex = 17;
			this->button_close->Text = L"close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &figures_and_solids::button_close_Click);
			// 
			// picture_triangle
			// 
			this->picture_triangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.Image")));
			this->picture_triangle->ImageLocation = L"";
			this->picture_triangle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_triangle.InitialImage")));
			this->picture_triangle->Location = System::Drawing::Point(12, 46);
			this->picture_triangle->Name = L"picture_triangle";
			this->picture_triangle->Size = System::Drawing::Size(116, 111);
			this->picture_triangle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_triangle->TabIndex = 18;
			this->picture_triangle->TabStop = false;
			// 
			// picture_trapezoid
			// 
			this->picture_trapezoid->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_trapezoid.Image")));
			this->picture_trapezoid->ImageLocation = L"";
			this->picture_trapezoid->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_trapezoid.InitialImage")));
			this->picture_trapezoid->Location = System::Drawing::Point(12, 163);
			this->picture_trapezoid->Name = L"picture_trapezoid";
			this->picture_trapezoid->Size = System::Drawing::Size(116, 111);
			this->picture_trapezoid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_trapezoid->TabIndex = 19;
			this->picture_trapezoid->TabStop = false;
			// 
			// pictureBox_rec
			// 
			this->pictureBox_rec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rec.Image")));
			this->pictureBox_rec->ImageLocation = L"";
			this->pictureBox_rec->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rec.InitialImage")));
			this->pictureBox_rec->Location = System::Drawing::Point(12, 280);
			this->pictureBox_rec->Name = L"pictureBox_rec";
			this->pictureBox_rec->Size = System::Drawing::Size(116, 111);
			this->pictureBox_rec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_rec->TabIndex = 20;
			this->pictureBox_rec->TabStop = false;
			// 
			// pictureBox_parallelogram
			// 
			this->pictureBox_parallelogram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_parallelogram.Image")));
			this->pictureBox_parallelogram->ImageLocation = L"";
			this->pictureBox_parallelogram->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_parallelogram.InitialImage")));
			this->pictureBox_parallelogram->Location = System::Drawing::Point(12, 397);
			this->pictureBox_parallelogram->Name = L"pictureBox_parallelogram";
			this->pictureBox_parallelogram->Size = System::Drawing::Size(116, 111);
			this->pictureBox_parallelogram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_parallelogram->TabIndex = 21;
			this->pictureBox_parallelogram->TabStop = false;
			// 
			// pictureBox_rhombus
			// 
			this->pictureBox_rhombus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rhombus.Image")));
			this->pictureBox_rhombus->ImageLocation = L"";
			this->pictureBox_rhombus->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rhombus.InitialImage")));
			this->pictureBox_rhombus->Location = System::Drawing::Point(12, 514);
			this->pictureBox_rhombus->Name = L"pictureBox_rhombus";
			this->pictureBox_rhombus->Size = System::Drawing::Size(116, 111);
			this->pictureBox_rhombus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_rhombus->TabIndex = 22;
			this->pictureBox_rhombus->TabStop = false;
			// 
			// pictureBox_deltoid
			// 
			this->pictureBox_deltoid->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_deltoid.Image")));
			this->pictureBox_deltoid->ImageLocation = L"";
			this->pictureBox_deltoid->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_deltoid.InitialImage")));
			this->pictureBox_deltoid->Location = System::Drawing::Point(12, 631);
			this->pictureBox_deltoid->Name = L"pictureBox_deltoid";
			this->pictureBox_deltoid->Size = System::Drawing::Size(116, 111);
			this->pictureBox_deltoid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_deltoid->TabIndex = 23;
			this->pictureBox_deltoid->TabStop = false;
			// 
			// pictureBox_circle
			// 
			this->pictureBox_circle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_circle.Image")));
			this->pictureBox_circle->ImageLocation = L"";
			this->pictureBox_circle->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_circle.InitialImage")));
			this->pictureBox_circle->Location = System::Drawing::Point(12, 748);
			this->pictureBox_circle->Name = L"pictureBox_circle";
			this->pictureBox_circle->Size = System::Drawing::Size(116, 111);
			this->pictureBox_circle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_circle->TabIndex = 24;
			this->pictureBox_circle->TabStop = false;
			// 
			// pictureBox_circle_slice
			// 
			this->pictureBox_circle_slice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_circle_slice.Image")));
			this->pictureBox_circle_slice->ImageLocation = L"";
			this->pictureBox_circle_slice->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_circle_slice.InitialImage")));
			this->pictureBox_circle_slice->Location = System::Drawing::Point(12, 865);
			this->pictureBox_circle_slice->Name = L"pictureBox_circle_slice";
			this->pictureBox_circle_slice->Size = System::Drawing::Size(116, 111);
			this->pictureBox_circle_slice->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_circle_slice->TabIndex = 25;
			this->pictureBox_circle_slice->TabStop = false;
			// 
			// pictureBox_cuboid
			// 
			this->pictureBox_cuboid->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cuboid.Image")));
			this->pictureBox_cuboid->ImageLocation = L"";
			this->pictureBox_cuboid->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cuboid.InitialImage")));
			this->pictureBox_cuboid->Location = System::Drawing::Point(12, 982);
			this->pictureBox_cuboid->Name = L"pictureBox_cuboid";
			this->pictureBox_cuboid->Size = System::Drawing::Size(116, 111);
			this->pictureBox_cuboid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_cuboid->TabIndex = 26;
			this->pictureBox_cuboid->TabStop = false;
			// 
			// pictureBox_pyramid
			// 
			this->pictureBox_pyramid->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_pyramid.Image")));
			this->pictureBox_pyramid->ImageLocation = L"";
			this->pictureBox_pyramid->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_pyramid.InitialImage")));
			this->pictureBox_pyramid->Location = System::Drawing::Point(12, 1216);
			this->pictureBox_pyramid->Name = L"pictureBox_pyramid";
			this->pictureBox_pyramid->Size = System::Drawing::Size(116, 111);
			this->pictureBox_pyramid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_pyramid->TabIndex = 27;
			this->pictureBox_pyramid->TabStop = false;
			// 
			// pictureBox_prism
			// 
			this->pictureBox_prism->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_prism.Image")));
			this->pictureBox_prism->ImageLocation = L"";
			this->pictureBox_prism->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_prism.InitialImage")));
			this->pictureBox_prism->Location = System::Drawing::Point(12, 1099);
			this->pictureBox_prism->Name = L"pictureBox_prism";
			this->pictureBox_prism->Size = System::Drawing::Size(116, 111);
			this->pictureBox_prism->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_prism->TabIndex = 28;
			this->pictureBox_prism->TabStop = false;
			// 
			// pictureBox_cylinder
			// 
			this->pictureBox_cylinder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cylinder.Image")));
			this->pictureBox_cylinder->ImageLocation = L"";
			this->pictureBox_cylinder->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cylinder.InitialImage")));
			this->pictureBox_cylinder->Location = System::Drawing::Point(12, 1333);
			this->pictureBox_cylinder->Name = L"pictureBox_cylinder";
			this->pictureBox_cylinder->Size = System::Drawing::Size(116, 111);
			this->pictureBox_cylinder->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_cylinder->TabIndex = 29;
			this->pictureBox_cylinder->TabStop = false;
			// 
			// pictureBox_cone
			// 
			this->pictureBox_cone->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cone.Image")));
			this->pictureBox_cone->ImageLocation = L"";
			this->pictureBox_cone->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_cone.InitialImage")));
			this->pictureBox_cone->Location = System::Drawing::Point(12, 1450);
			this->pictureBox_cone->Name = L"pictureBox_cone";
			this->pictureBox_cone->Size = System::Drawing::Size(116, 111);
			this->pictureBox_cone->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_cone->TabIndex = 30;
			this->pictureBox_cone->TabStop = false;
			// 
			// pictureBox_ball
			// 
			this->pictureBox_ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_ball.Image")));
			this->pictureBox_ball->ImageLocation = L"";
			this->pictureBox_ball->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_ball.InitialImage")));
			this->pictureBox_ball->Location = System::Drawing::Point(12, 1567);
			this->pictureBox_ball->Name = L"pictureBox_ball";
			this->pictureBox_ball->Size = System::Drawing::Size(116, 111);
			this->pictureBox_ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_ball->TabIndex = 31;
			this->pictureBox_ball->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(136, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"h:";
			// 
			// textBox_triangle_a
			// 
			this->textBox_triangle_a->Location = System::Drawing::Point(158, 47);
			this->textBox_triangle_a->Name = L"textBox_triangle_a";
			this->textBox_triangle_a->Size = System::Drawing::Size(100, 20);
			this->textBox_triangle_a->TabIndex = 34;
			// 
			// textBox_triangle_h
			// 
			this->textBox_triangle_h->Location = System::Drawing::Point(158, 73);
			this->textBox_triangle_h->Name = L"textBox_triangle_h";
			this->textBox_triangle_h->Size = System::Drawing::Size(100, 20);
			this->textBox_triangle_h->TabIndex = 35;
			// 
			// button_triangle
			// 
			this->button_triangle->Location = System::Drawing::Point(139, 133);
			this->button_triangle->Name = L"button_triangle";
			this->button_triangle->Size = System::Drawing::Size(75, 23);
			this->button_triangle->TabIndex = 36;
			this->button_triangle->Text = L"calculate";
			this->button_triangle->UseVisualStyleBackColor = true;
			this->button_triangle->Click += gcnew System::EventHandler(this, &figures_and_solids::button_triangle_Click);
			// 
			// textBox_triangle_out
			// 
			this->textBox_triangle_out->Location = System::Drawing::Point(221, 135);
			this->textBox_triangle_out->Name = L"textBox_triangle_out";
			this->textBox_triangle_out->ReadOnly = true;
			this->textBox_triangle_out->Size = System::Drawing::Size(100, 20);
			this->textBox_triangle_out->TabIndex = 37;
			// 
			// textBox_trapezoid_a
			// 
			this->textBox_trapezoid_a->Location = System::Drawing::Point(158, 163);
			this->textBox_trapezoid_a->Name = L"textBox_trapezoid_a";
			this->textBox_trapezoid_a->Size = System::Drawing::Size(100, 20);
			this->textBox_trapezoid_a->TabIndex = 38;
			// 
			// textBox_trapezoid_b
			// 
			this->textBox_trapezoid_b->Location = System::Drawing::Point(158, 189);
			this->textBox_trapezoid_b->Name = L"textBox_trapezoid_b";
			this->textBox_trapezoid_b->Size = System::Drawing::Size(100, 20);
			this->textBox_trapezoid_b->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"a:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(136, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 41;
			this->label4->Text = L"b:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(136, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"h:";
			// 
			// textBox_trapezoid_h
			// 
			this->textBox_trapezoid_h->Location = System::Drawing::Point(158, 215);
			this->textBox_trapezoid_h->Name = L"textBox_trapezoid_h";
			this->textBox_trapezoid_h->Size = System::Drawing::Size(100, 20);
			this->textBox_trapezoid_h->TabIndex = 43;
			// 
			// button_trapezoid
			// 
			this->button_trapezoid->Location = System::Drawing::Point(139, 251);
			this->button_trapezoid->Name = L"button_trapezoid";
			this->button_trapezoid->Size = System::Drawing::Size(75, 23);
			this->button_trapezoid->TabIndex = 44;
			this->button_trapezoid->Text = L"calculate";
			this->button_trapezoid->UseVisualStyleBackColor = true;
			this->button_trapezoid->Click += gcnew System::EventHandler(this, &figures_and_solids::button_trapezoid_Click);
			// 
			// textBox_trapezoid_out
			// 
			this->textBox_trapezoid_out->Location = System::Drawing::Point(221, 254);
			this->textBox_trapezoid_out->Name = L"textBox_trapezoid_out";
			this->textBox_trapezoid_out->ReadOnly = true;
			this->textBox_trapezoid_out->Size = System::Drawing::Size(100, 20);
			this->textBox_trapezoid_out->TabIndex = 45;
			// 
			// textBox_rectangle_a
			// 
			this->textBox_rectangle_a->Location = System::Drawing::Point(158, 280);
			this->textBox_rectangle_a->Name = L"textBox_rectangle_a";
			this->textBox_rectangle_a->Size = System::Drawing::Size(100, 20);
			this->textBox_rectangle_a->TabIndex = 46;
			// 
			// textBox_rectangle_b
			// 
			this->textBox_rectangle_b->Location = System::Drawing::Point(158, 306);
			this->textBox_rectangle_b->Name = L"textBox_rectangle_b";
			this->textBox_rectangle_b->Size = System::Drawing::Size(100, 20);
			this->textBox_rectangle_b->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(136, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 48;
			this->label6->Text = L"a:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(136, 309);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 49;
			this->label7->Text = L"b:";
			// 
			// button_rectangle
			// 
			this->button_rectangle->Location = System::Drawing::Point(139, 368);
			this->button_rectangle->Name = L"button_rectangle";
			this->button_rectangle->Size = System::Drawing::Size(75, 23);
			this->button_rectangle->TabIndex = 50;
			this->button_rectangle->Text = L"calculate";
			this->button_rectangle->UseVisualStyleBackColor = true;
			this->button_rectangle->Click += gcnew System::EventHandler(this, &figures_and_solids::button_rectangle_Click);
			// 
			// textBox_rectangle_out
			// 
			this->textBox_rectangle_out->Location = System::Drawing::Point(221, 370);
			this->textBox_rectangle_out->Name = L"textBox_rectangle_out";
			this->textBox_rectangle_out->ReadOnly = true;
			this->textBox_rectangle_out->Size = System::Drawing::Size(100, 20);
			this->textBox_rectangle_out->TabIndex = 51;
			// 
			// textBox_parallelogram_a
			// 
			this->textBox_parallelogram_a->Location = System::Drawing::Point(158, 397);
			this->textBox_parallelogram_a->Name = L"textBox_parallelogram_a";
			this->textBox_parallelogram_a->Size = System::Drawing::Size(100, 20);
			this->textBox_parallelogram_a->TabIndex = 52;
			// 
			// textBox_parallelogram_h
			// 
			this->textBox_parallelogram_h->Location = System::Drawing::Point(158, 423);
			this->textBox_parallelogram_h->Name = L"textBox_parallelogram_h";
			this->textBox_parallelogram_h->Size = System::Drawing::Size(100, 20);
			this->textBox_parallelogram_h->TabIndex = 53;
			// 
			// button_parallelogram
			// 
			this->button_parallelogram->Location = System::Drawing::Point(139, 485);
			this->button_parallelogram->Name = L"button_parallelogram";
			this->button_parallelogram->Size = System::Drawing::Size(75, 23);
			this->button_parallelogram->TabIndex = 54;
			this->button_parallelogram->Text = L"calculate";
			this->button_parallelogram->UseVisualStyleBackColor = true;
			this->button_parallelogram->Click += gcnew System::EventHandler(this, &figures_and_solids::button_parallelogram_Click);
			// 
			// textBox_parallelogram_out
			// 
			this->textBox_parallelogram_out->Location = System::Drawing::Point(221, 485);
			this->textBox_parallelogram_out->Name = L"textBox_parallelogram_out";
			this->textBox_parallelogram_out->ReadOnly = true;
			this->textBox_parallelogram_out->Size = System::Drawing::Size(100, 20);
			this->textBox_parallelogram_out->TabIndex = 55;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(136, 400);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"a:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(136, 426);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"h:";
			// 
			// textBox_rhombus_a
			// 
			this->textBox_rhombus_a->Location = System::Drawing::Point(158, 514);
			this->textBox_rhombus_a->Name = L"textBox_rhombus_a";
			this->textBox_rhombus_a->Size = System::Drawing::Size(100, 20);
			this->textBox_rhombus_a->TabIndex = 58;
			// 
			// textBox_rhombus_h
			// 
			this->textBox_rhombus_h->Location = System::Drawing::Point(158, 540);
			this->textBox_rhombus_h->Name = L"textBox_rhombus_h";
			this->textBox_rhombus_h->Size = System::Drawing::Size(100, 20);
			this->textBox_rhombus_h->TabIndex = 59;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(134, 521);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 60;
			this->label10->Text = L"a:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(134, 543);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 13);
			this->label11->TabIndex = 61;
			this->label11->Text = L"h:";
			// 
			// button_rhombus
			// 
			this->button_rhombus->Location = System::Drawing::Point(139, 602);
			this->button_rhombus->Name = L"button_rhombus";
			this->button_rhombus->Size = System::Drawing::Size(75, 23);
			this->button_rhombus->TabIndex = 62;
			this->button_rhombus->Text = L"calculate";
			this->button_rhombus->UseVisualStyleBackColor = true;
			this->button_rhombus->Click += gcnew System::EventHandler(this, &figures_and_solids::button_rhombus_Click);
			// 
			// textBox_rhombus_out
			// 
			this->textBox_rhombus_out->Location = System::Drawing::Point(221, 602);
			this->textBox_rhombus_out->Name = L"textBox_rhombus_out";
			this->textBox_rhombus_out->ReadOnly = true;
			this->textBox_rhombus_out->Size = System::Drawing::Size(100, 20);
			this->textBox_rhombus_out->TabIndex = 63;
			// 
			// textBox_deltoid_d1
			// 
			this->textBox_deltoid_d1->Location = System::Drawing::Point(158, 631);
			this->textBox_deltoid_d1->Name = L"textBox_deltoid_d1";
			this->textBox_deltoid_d1->Size = System::Drawing::Size(100, 20);
			this->textBox_deltoid_d1->TabIndex = 64;
			// 
			// textBox_deltoid_d2
			// 
			this->textBox_deltoid_d2->Location = System::Drawing::Point(158, 657);
			this->textBox_deltoid_d2->Name = L"textBox_deltoid_d2";
			this->textBox_deltoid_d2->Size = System::Drawing::Size(100, 20);
			this->textBox_deltoid_d2->TabIndex = 65;
			// 
			// button_deltoid
			// 
			this->button_deltoid->Location = System::Drawing::Point(139, 719);
			this->button_deltoid->Name = L"button_deltoid";
			this->button_deltoid->Size = System::Drawing::Size(75, 23);
			this->button_deltoid->TabIndex = 66;
			this->button_deltoid->Text = L"calculate";
			this->button_deltoid->UseVisualStyleBackColor = true;
			this->button_deltoid->Click += gcnew System::EventHandler(this, &figures_and_solids::button_deltoid_Click);
			// 
			// textBox_deltoid_out
			// 
			this->textBox_deltoid_out->Location = System::Drawing::Point(221, 719);
			this->textBox_deltoid_out->Name = L"textBox_deltoid_out";
			this->textBox_deltoid_out->ReadOnly = true;
			this->textBox_deltoid_out->Size = System::Drawing::Size(100, 20);
			this->textBox_deltoid_out->TabIndex = 67;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(136, 634);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 68;
			this->label12->Text = L"d1:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(136, 660);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 69;
			this->label13->Text = L"d2:";
			// 
			// textBox_circle_r
			// 
			this->textBox_circle_r->Location = System::Drawing::Point(158, 748);
			this->textBox_circle_r->Name = L"textBox_circle_r";
			this->textBox_circle_r->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_r->TabIndex = 70;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(139, 751);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 71;
			this->label14->Text = L"r:";
			// 
			// button_circle
			// 
			this->button_circle->Location = System::Drawing::Point(139, 836);
			this->button_circle->Name = L"button_circle";
			this->button_circle->Size = System::Drawing::Size(75, 23);
			this->button_circle->TabIndex = 72;
			this->button_circle->Text = L"calculate";
			this->button_circle->UseVisualStyleBackColor = true;
			this->button_circle->Click += gcnew System::EventHandler(this, &figures_and_solids::button_circle_Click);
			// 
			// textBox_circle_out_area
			// 
			this->textBox_circle_out_area->Location = System::Drawing::Point(221, 812);
			this->textBox_circle_out_area->Name = L"textBox_circle_out_area";
			this->textBox_circle_out_area->ReadOnly = true;
			this->textBox_circle_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_out_area->TabIndex = 73;
			// 
			// textBox_circle_out_dimension
			// 
			this->textBox_circle_out_dimension->Location = System::Drawing::Point(221, 838);
			this->textBox_circle_out_dimension->Name = L"textBox_circle_out_dimension";
			this->textBox_circle_out_dimension->ReadOnly = true;
			this->textBox_circle_out_dimension->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_out_dimension->TabIndex = 74;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(327, 815);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 13);
			this->label15->TabIndex = 75;
			this->label15->Text = L"area";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(327, 841);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 76;
			this->label16->Text = L"dimension";
			// 
			// textBox_circle_slice_r
			// 
			this->textBox_circle_slice_r->Location = System::Drawing::Point(158, 865);
			this->textBox_circle_slice_r->Name = L"textBox_circle_slice_r";
			this->textBox_circle_slice_r->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_slice_r->TabIndex = 77;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(139, 868);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 78;
			this->label17->Text = L"r:";
			// 
			// textBox_circle_slice_a
			// 
			this->textBox_circle_slice_a->Location = System::Drawing::Point(158, 891);
			this->textBox_circle_slice_a->Name = L"textBox_circle_slice_a";
			this->textBox_circle_slice_a->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_slice_a->TabIndex = 79;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(139, 894);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 13);
			this->label18->TabIndex = 80;
			this->label18->Text = L"a:";
			// 
			// button_circle_slice
			// 
			this->button_circle_slice->Location = System::Drawing::Point(139, 953);
			this->button_circle_slice->Name = L"button_circle_slice";
			this->button_circle_slice->Size = System::Drawing::Size(75, 23);
			this->button_circle_slice->TabIndex = 81;
			this->button_circle_slice->Text = L"calculate";
			this->button_circle_slice->UseVisualStyleBackColor = true;
			this->button_circle_slice->Click += gcnew System::EventHandler(this, &figures_and_solids::button_circle_slice_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(326, 956);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 13);
			this->label19->TabIndex = 85;
			this->label19->Text = L"dimension";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(326, 930);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(28, 13);
			this->label20->TabIndex = 84;
			this->label20->Text = L"area";
			// 
			// textBox_circle_slice_out_dimension
			// 
			this->textBox_circle_slice_out_dimension->Location = System::Drawing::Point(220, 953);
			this->textBox_circle_slice_out_dimension->Name = L"textBox_circle_slice_out_dimension";
			this->textBox_circle_slice_out_dimension->ReadOnly = true;
			this->textBox_circle_slice_out_dimension->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_slice_out_dimension->TabIndex = 83;
			// 
			// textBox_circle_slice_out_area
			// 
			this->textBox_circle_slice_out_area->Location = System::Drawing::Point(220, 927);
			this->textBox_circle_slice_out_area->Name = L"textBox_circle_slice_out_area";
			this->textBox_circle_slice_out_area->ReadOnly = true;
			this->textBox_circle_slice_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_circle_slice_out_area->TabIndex = 82;
			// 
			// textBox_cuboid_a
			// 
			this->textBox_cuboid_a->Location = System::Drawing::Point(158, 982);
			this->textBox_cuboid_a->Name = L"textBox_cuboid_a";
			this->textBox_cuboid_a->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_a->TabIndex = 86;
			// 
			// textBox_cuboid_b
			// 
			this->textBox_cuboid_b->Location = System::Drawing::Point(158, 1008);
			this->textBox_cuboid_b->Name = L"textBox_cuboid_b";
			this->textBox_cuboid_b->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_b->TabIndex = 87;
			// 
			// textBox_cuboid_c
			// 
			this->textBox_cuboid_c->Location = System::Drawing::Point(158, 1034);
			this->textBox_cuboid_c->Name = L"textBox_cuboid_c";
			this->textBox_cuboid_c->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_c->TabIndex = 88;
			// 
			// button_cuboid
			// 
			this->button_cuboid->Location = System::Drawing::Point(139, 1070);
			this->button_cuboid->Name = L"button_cuboid";
			this->button_cuboid->Size = System::Drawing::Size(75, 23);
			this->button_cuboid->TabIndex = 89;
			this->button_cuboid->Text = L"calculate";
			this->button_cuboid->UseVisualStyleBackColor = true;
			this->button_cuboid->Click += gcnew System::EventHandler(this, &figures_and_solids::button_cuboid_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(136, 985);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 13);
			this->label21->TabIndex = 90;
			this->label21->Text = L"a:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(136, 1011);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(16, 13);
			this->label22->TabIndex = 91;
			this->label22->Text = L"b:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(136, 1037);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(16, 13);
			this->label23->TabIndex = 92;
			this->label23->Text = L"c:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(370, 985);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 13);
			this->label24->TabIndex = 94;
			this->label24->Text = L"area";
			// 
			// textBox_cuboid_out_area
			// 
			this->textBox_cuboid_out_area->Location = System::Drawing::Point(264, 982);
			this->textBox_cuboid_out_area->Name = L"textBox_cuboid_out_area";
			this->textBox_cuboid_out_area->ReadOnly = true;
			this->textBox_cuboid_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_out_area->TabIndex = 93;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(370, 1011);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(44, 13);
			this->label25->TabIndex = 96;
			this->label25->Text = L"volume ";
			// 
			// textBox_cuboid_out_volume
			// 
			this->textBox_cuboid_out_volume->Location = System::Drawing::Point(264, 1008);
			this->textBox_cuboid_out_volume->Name = L"textBox_cuboid_out_volume";
			this->textBox_cuboid_out_volume->ReadOnly = true;
			this->textBox_cuboid_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_out_volume->TabIndex = 95;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(370, 1036);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(47, 13);
			this->label26->TabIndex = 98;
			this->label26->Text = L"diagonal";
			// 
			// textBox_cuboid_out_diagonal
			// 
			this->textBox_cuboid_out_diagonal->Location = System::Drawing::Point(264, 1034);
			this->textBox_cuboid_out_diagonal->Name = L"textBox_cuboid_out_diagonal";
			this->textBox_cuboid_out_diagonal->ReadOnly = true;
			this->textBox_cuboid_out_diagonal->Size = System::Drawing::Size(100, 20);
			this->textBox_cuboid_out_diagonal->TabIndex = 97;
			// 
			// textBox_prism_ba
			// 
			this->textBox_prism_ba->Location = System::Drawing::Point(158, 1099);
			this->textBox_prism_ba->Name = L"textBox_prism_ba";
			this->textBox_prism_ba->Size = System::Drawing::Size(100, 20);
			this->textBox_prism_ba->TabIndex = 99;
			// 
			// textBox_prism_h
			// 
			this->textBox_prism_h->Location = System::Drawing::Point(158, 1125);
			this->textBox_prism_h->Name = L"textBox_prism_h";
			this->textBox_prism_h->Size = System::Drawing::Size(100, 20);
			this->textBox_prism_h->TabIndex = 100;
			// 
			// textBox_prism_bc
			// 
			this->textBox_prism_bc->Location = System::Drawing::Point(158, 1151);
			this->textBox_prism_bc->Name = L"textBox_prism_bc";
			this->textBox_prism_bc->Size = System::Drawing::Size(100, 20);
			this->textBox_prism_bc->TabIndex = 101;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(136, 1102);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 13);
			this->label28->TabIndex = 102;
			this->label28->Text = L"ba:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(136, 1128);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(16, 13);
			this->label29->TabIndex = 103;
			this->label29->Text = L"h:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(136, 1154);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 13);
			this->label30->TabIndex = 104;
			this->label30->Text = L"bc:";
			// 
			// button_prism
			// 
			this->button_prism->Location = System::Drawing::Point(139, 1187);
			this->button_prism->Name = L"button_prism";
			this->button_prism->Size = System::Drawing::Size(75, 23);
			this->button_prism->TabIndex = 105;
			this->button_prism->Text = L"calculate";
			this->button_prism->UseVisualStyleBackColor = true;
			this->button_prism->Click += gcnew System::EventHandler(this, &figures_and_solids::button_prism_Click);
			// 
			// textBox_prism_out_area
			// 
			this->textBox_prism_out_area->Location = System::Drawing::Point(264, 1099);
			this->textBox_prism_out_area->Name = L"textBox_prism_out_area";
			this->textBox_prism_out_area->ReadOnly = true;
			this->textBox_prism_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_prism_out_area->TabIndex = 106;
			// 
			// textBox_prism_out_volume
			// 
			this->textBox_prism_out_volume->Location = System::Drawing::Point(264, 1125);
			this->textBox_prism_out_volume->Name = L"textBox_prism_out_volume";
			this->textBox_prism_out_volume->ReadOnly = true;
			this->textBox_prism_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_prism_out_volume->TabIndex = 107;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(370, 1102);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 13);
			this->label27->TabIndex = 108;
			this->label27->Text = L"area";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(370, 1128);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(44, 13);
			this->label31->TabIndex = 109;
			this->label31->Text = L"volume ";
			// 
			// textBox_pyramid_ba
			// 
			this->textBox_pyramid_ba->Location = System::Drawing::Point(158, 1216);
			this->textBox_pyramid_ba->Name = L"textBox_pyramid_ba";
			this->textBox_pyramid_ba->Size = System::Drawing::Size(100, 20);
			this->textBox_pyramid_ba->TabIndex = 110;
			// 
			// textBox_pyramid_h
			// 
			this->textBox_pyramid_h->Location = System::Drawing::Point(158, 1242);
			this->textBox_pyramid_h->Name = L"textBox_pyramid_h";
			this->textBox_pyramid_h->Size = System::Drawing::Size(100, 20);
			this->textBox_pyramid_h->TabIndex = 111;
			// 
			// textBox_pyramid_la
			// 
			this->textBox_pyramid_la->Location = System::Drawing::Point(158, 1268);
			this->textBox_pyramid_la->Name = L"textBox_pyramid_la";
			this->textBox_pyramid_la->Size = System::Drawing::Size(100, 20);
			this->textBox_pyramid_la->TabIndex = 112;
			// 
			// button_pyramid
			// 
			this->button_pyramid->Location = System::Drawing::Point(139, 1304);
			this->button_pyramid->Name = L"button_pyramid";
			this->button_pyramid->Size = System::Drawing::Size(75, 23);
			this->button_pyramid->TabIndex = 113;
			this->button_pyramid->Text = L"calculate";
			this->button_pyramid->UseVisualStyleBackColor = true;
			// 
			// textBox_pyramid_out_area
			// 
			this->textBox_pyramid_out_area->Location = System::Drawing::Point(264, 1216);
			this->textBox_pyramid_out_area->Name = L"textBox_pyramid_out_area";
			this->textBox_pyramid_out_area->ReadOnly = true;
			this->textBox_pyramid_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_pyramid_out_area->TabIndex = 114;
			// 
			// textBox_pyramid_out_volume
			// 
			this->textBox_pyramid_out_volume->Location = System::Drawing::Point(264, 1242);
			this->textBox_pyramid_out_volume->Name = L"textBox_pyramid_out_volume";
			this->textBox_pyramid_out_volume->ReadOnly = true;
			this->textBox_pyramid_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_pyramid_out_volume->TabIndex = 115;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(134, 1219);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 13);
			this->label32->TabIndex = 116;
			this->label32->Text = L"ba:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(134, 1245);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(16, 13);
			this->label33->TabIndex = 117;
			this->label33->Text = L"h:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(134, 1271);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(18, 13);
			this->label34->TabIndex = 118;
			this->label34->Text = L"la:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(370, 1223);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(28, 13);
			this->label35->TabIndex = 119;
			this->label35->Text = L"area";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(370, 1249);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 13);
			this->label36->TabIndex = 120;
			this->label36->Text = L"volume ";
			// 
			// textBox_cylinder_r
			// 
			this->textBox_cylinder_r->Location = System::Drawing::Point(158, 1333);
			this->textBox_cylinder_r->Name = L"textBox_cylinder_r";
			this->textBox_cylinder_r->Size = System::Drawing::Size(100, 20);
			this->textBox_cylinder_r->TabIndex = 121;
			// 
			// textBox_cylinder_h
			// 
			this->textBox_cylinder_h->Location = System::Drawing::Point(158, 1359);
			this->textBox_cylinder_h->Name = L"textBox_cylinder_h";
			this->textBox_cylinder_h->Size = System::Drawing::Size(100, 20);
			this->textBox_cylinder_h->TabIndex = 122;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(130, 1336);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 13);
			this->label37->TabIndex = 123;
			this->label37->Text = L"r:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(130, 1362);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(16, 13);
			this->label38->TabIndex = 124;
			this->label38->Text = L"h:";
			// 
			// button_cylinder
			// 
			this->button_cylinder->Location = System::Drawing::Point(139, 1421);
			this->button_cylinder->Name = L"button_cylinder";
			this->button_cylinder->Size = System::Drawing::Size(75, 23);
			this->button_cylinder->TabIndex = 125;
			this->button_cylinder->Text = L"calculate";
			this->button_cylinder->UseVisualStyleBackColor = true;
			this->button_cylinder->Click += gcnew System::EventHandler(this, &figures_and_solids::button_cylinder_Click);
			// 
			// textBox_cylinder_out_volume
			// 
			this->textBox_cylinder_out_volume->Location = System::Drawing::Point(220, 1420);
			this->textBox_cylinder_out_volume->Name = L"textBox_cylinder_out_volume";
			this->textBox_cylinder_out_volume->ReadOnly = true;
			this->textBox_cylinder_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_cylinder_out_volume->TabIndex = 126;
			// 
			// textBox_cylinder_out_area
			// 
			this->textBox_cylinder_out_area->Location = System::Drawing::Point(220, 1398);
			this->textBox_cylinder_out_area->Name = L"textBox_cylinder_out_area";
			this->textBox_cylinder_out_area->ReadOnly = true;
			this->textBox_cylinder_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_cylinder_out_area->TabIndex = 127;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(326, 1401);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 128;
			this->label39->Text = L"area";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(326, 1426);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(44, 13);
			this->label40->TabIndex = 129;
			this->label40->Text = L"volume ";
			// 
			// textBox_cone_r
			// 
			this->textBox_cone_r->Location = System::Drawing::Point(158, 1450);
			this->textBox_cone_r->Name = L"textBox_cone_r";
			this->textBox_cone_r->Size = System::Drawing::Size(100, 20);
			this->textBox_cone_r->TabIndex = 130;
			// 
			// textBox_cone_h
			// 
			this->textBox_cone_h->Location = System::Drawing::Point(158, 1476);
			this->textBox_cone_h->Name = L"textBox_cone_h";
			this->textBox_cone_h->Size = System::Drawing::Size(100, 20);
			this->textBox_cone_h->TabIndex = 131;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(139, 1453);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(13, 13);
			this->label41->TabIndex = 132;
			this->label41->Text = L"r:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(139, 1479);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(16, 13);
			this->label42->TabIndex = 133;
			this->label42->Text = L"h:";
			// 
			// button_cone
			// 
			this->button_cone->Location = System::Drawing::Point(139, 1538);
			this->button_cone->Name = L"button_cone";
			this->button_cone->Size = System::Drawing::Size(75, 23);
			this->button_cone->TabIndex = 134;
			this->button_cone->Text = L"calculate";
			this->button_cone->UseVisualStyleBackColor = true;
			this->button_cone->Click += gcnew System::EventHandler(this, &figures_and_solids::button_cone_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(326, 1541);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(44, 13);
			this->label43->TabIndex = 138;
			this->label43->Text = L"volume ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(326, 1512);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(28, 13);
			this->label44->TabIndex = 137;
			this->label44->Text = L"area";
			// 
			// textBox_cone_out_area
			// 
			this->textBox_cone_out_area->Location = System::Drawing::Point(220, 1512);
			this->textBox_cone_out_area->Name = L"textBox_cone_out_area";
			this->textBox_cone_out_area->ReadOnly = true;
			this->textBox_cone_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_cone_out_area->TabIndex = 136;
			// 
			// textBox_cone_out_volume
			// 
			this->textBox_cone_out_volume->Location = System::Drawing::Point(220, 1538);
			this->textBox_cone_out_volume->Name = L"textBox_cone_out_volume";
			this->textBox_cone_out_volume->ReadOnly = true;
			this->textBox_cone_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_cone_out_volume->TabIndex = 135;
			// 
			// textBox_ball_r
			// 
			this->textBox_ball_r->Location = System::Drawing::Point(158, 1567);
			this->textBox_ball_r->Name = L"textBox_ball_r";
			this->textBox_ball_r->Size = System::Drawing::Size(100, 20);
			this->textBox_ball_r->TabIndex = 139;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(139, 1570);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(13, 13);
			this->label45->TabIndex = 141;
			this->label45->Text = L"r:";
			// 
			// button_ball
			// 
			this->button_ball->Location = System::Drawing::Point(139, 1655);
			this->button_ball->Name = L"button_ball";
			this->button_ball->Size = System::Drawing::Size(75, 23);
			this->button_ball->TabIndex = 142;
			this->button_ball->Text = L"calculate";
			this->button_ball->UseVisualStyleBackColor = true;
			this->button_ball->Click += gcnew System::EventHandler(this, &figures_and_solids::button_ball_Click);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(326, 1658);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(44, 13);
			this->label46->TabIndex = 146;
			this->label46->Text = L"volume ";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(326, 1632);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(28, 13);
			this->label47->TabIndex = 145;
			this->label47->Text = L"area";
			// 
			// textBox_ball_out_area
			// 
			this->textBox_ball_out_area->Location = System::Drawing::Point(220, 1629);
			this->textBox_ball_out_area->Name = L"textBox_ball_out_area";
			this->textBox_ball_out_area->ReadOnly = true;
			this->textBox_ball_out_area->Size = System::Drawing::Size(100, 20);
			this->textBox_ball_out_area->TabIndex = 144;
			// 
			// textBox_ball_out_volume
			// 
			this->textBox_ball_out_volume->Location = System::Drawing::Point(220, 1655);
			this->textBox_ball_out_volume->Name = L"textBox_ball_out_volume";
			this->textBox_ball_out_volume->ReadOnly = true;
			this->textBox_ball_out_volume->Size = System::Drawing::Size(100, 20);
			this->textBox_ball_out_volume->TabIndex = 143;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(332, 8618);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 147;
			this->button1->Text = L"close";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(376, 1643);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 148;
			this->button2->Text = L"close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &figures_and_solids::button2_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(327, 722);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(28, 13);
			this->label48->TabIndex = 149;
			this->label48->Text = L"area";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(327, 605);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(28, 13);
			this->label49->TabIndex = 150;
			this->label49->Text = L"area";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(327, 490);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(28, 13);
			this->label50->TabIndex = 151;
			this->label50->Text = L"area";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(327, 373);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(28, 13);
			this->label51->TabIndex = 152;
			this->label51->Text = L"area";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(327, 257);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(28, 13);
			this->label52->TabIndex = 153;
			this->label52->Text = L"area";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(327, 138);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(28, 13);
			this->label53->TabIndex = 154;
			this->label53->Text = L"area";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(264, 894);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(87, 13);
			this->label54->TabIndex = 155;
			this->label54->Text = L"angle of the slice";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(230, 1197);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(269, 13);
			this->label55->TabIndex = 156;
			this->label55->Text = L"ba is the area of the base, bc is the base circumference";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(230, 1314);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(80, 13);
			this->label56->TabIndex = 157;
			this->label56->Text = L"la is lateral area";
			// 
			// figures_and_solids
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(521, 283);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->textBox_ball_out_area);
			this->Controls->Add(this->textBox_ball_out_volume);
			this->Controls->Add(this->button_ball);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->textBox_ball_r);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->textBox_cone_out_area);
			this->Controls->Add(this->textBox_cone_out_volume);
			this->Controls->Add(this->button_cone);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->textBox_cone_h);
			this->Controls->Add(this->textBox_cone_r);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->textBox_cylinder_out_area);
			this->Controls->Add(this->textBox_cylinder_out_volume);
			this->Controls->Add(this->button_cylinder);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->textBox_cylinder_h);
			this->Controls->Add(this->textBox_cylinder_r);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->textBox_pyramid_out_volume);
			this->Controls->Add(this->textBox_pyramid_out_area);
			this->Controls->Add(this->button_pyramid);
			this->Controls->Add(this->textBox_pyramid_la);
			this->Controls->Add(this->textBox_pyramid_h);
			this->Controls->Add(this->textBox_pyramid_ba);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox_prism_out_volume);
			this->Controls->Add(this->textBox_prism_out_area);
			this->Controls->Add(this->button_prism);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox_prism_bc);
			this->Controls->Add(this->textBox_prism_h);
			this->Controls->Add(this->textBox_prism_ba);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox_cuboid_out_diagonal);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox_cuboid_out_volume);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox_cuboid_out_area);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button_cuboid);
			this->Controls->Add(this->textBox_cuboid_c);
			this->Controls->Add(this->textBox_cuboid_b);
			this->Controls->Add(this->textBox_cuboid_a);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox_circle_slice_out_dimension);
			this->Controls->Add(this->textBox_circle_slice_out_area);
			this->Controls->Add(this->button_circle_slice);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox_circle_slice_a);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox_circle_slice_r);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox_circle_out_dimension);
			this->Controls->Add(this->textBox_circle_out_area);
			this->Controls->Add(this->button_circle);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox_circle_r);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox_deltoid_out);
			this->Controls->Add(this->button_deltoid);
			this->Controls->Add(this->textBox_deltoid_d2);
			this->Controls->Add(this->textBox_deltoid_d1);
			this->Controls->Add(this->textBox_rhombus_out);
			this->Controls->Add(this->button_rhombus);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_rhombus_h);
			this->Controls->Add(this->textBox_rhombus_a);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_parallelogram_out);
			this->Controls->Add(this->button_parallelogram);
			this->Controls->Add(this->textBox_parallelogram_h);
			this->Controls->Add(this->textBox_parallelogram_a);
			this->Controls->Add(this->textBox_rectangle_out);
			this->Controls->Add(this->button_rectangle);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_rectangle_b);
			this->Controls->Add(this->textBox_rectangle_a);
			this->Controls->Add(this->textBox_trapezoid_out);
			this->Controls->Add(this->button_trapezoid);
			this->Controls->Add(this->textBox_trapezoid_h);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_trapezoid_b);
			this->Controls->Add(this->textBox_trapezoid_a);
			this->Controls->Add(this->textBox_triangle_out);
			this->Controls->Add(this->button_triangle);
			this->Controls->Add(this->textBox_triangle_h);
			this->Controls->Add(this->textBox_triangle_a);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox_ball);
			this->Controls->Add(this->pictureBox_cone);
			this->Controls->Add(this->pictureBox_cylinder);
			this->Controls->Add(this->pictureBox_prism);
			this->Controls->Add(this->pictureBox_pyramid);
			this->Controls->Add(this->pictureBox_cuboid);
			this->Controls->Add(this->pictureBox_circle_slice);
			this->Controls->Add(this->pictureBox_circle);
			this->Controls->Add(this->pictureBox_deltoid);
			this->Controls->Add(this->pictureBox_rhombus);
			this->Controls->Add(this->pictureBox_parallelogram);
			this->Controls->Add(this->pictureBox_rec);
			this->Controls->Add(this->picture_trapezoid);
			this->Controls->Add(this->picture_triangle);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"figures_and_solids";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Math Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_triangle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_trapezoid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_parallelogram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rhombus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_deltoid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_circle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_circle_slice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cuboid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pyramid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_prism))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cylinder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_cone))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_ball))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	} 
	
	private: System::Void button_triangle_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (textBox_triangle_a->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			if (textBox_triangle_h->Text->Length == 0)
			{
				error^ a = gcnew error(empty, "empty_box");
				throw a;
			}
			triangle^ t_inst = gcnew triangle(textBox_triangle_a->Text, textBox_triangle_h->Text);
			textBox_triangle_out->Text = System::Convert::ToString(t_inst->calculatearea());
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
private: System::Void button_trapezoid_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_trapezoid_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_trapezoid_b->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_trapezoid_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		trapezoid^ t_inst = gcnew trapezoid(textBox_trapezoid_a->Text, textBox_trapezoid_b->Text, textBox_trapezoid_h->Text);
		textBox_trapezoid_out->Text = System::Convert::ToString(t_inst->calculatearea());
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
private: System::Void button_rectangle_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_rectangle_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_rectangle_b->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		rectangle^ r_inst = gcnew rectangle(textBox_rectangle_a->Text, textBox_rectangle_b->Text);
		textBox_rectangle_out->Text = System::Convert::ToString(r_inst->calculatearea());
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


private: System::Void button_parallelogram_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_parallelogram_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_parallelogram_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		parallelogram^ r_inst = gcnew parallelogram(textBox_parallelogram_a->Text, textBox_parallelogram_h->Text);
		textBox_parallelogram_out->Text = System::Convert::ToString(r_inst->calculatearea());
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
private: System::Void button_rhombus_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_rhombus_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_rhombus_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		rhombus^ r_inst = gcnew rhombus(textBox_rhombus_a->Text, textBox_rhombus_h->Text);
		textBox_rhombus_out->Text = System::Convert::ToString(r_inst->calculatearea());
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
private: System::Void button_deltoid_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_deltoid_d1->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_deltoid_d2->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		deltoid^ d_inst = gcnew deltoid(textBox_deltoid_d1->Text, textBox_deltoid_d2->Text);
		textBox_deltoid_out->Text = System::Convert::ToString(d_inst->calculatearea());
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
private: System::Void button_circle_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_circle_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		circle^ d_inst = gcnew circle(textBox_circle_r->Text);
		textBox_circle_out_area->Text = System::Convert::ToString(d_inst->calculatearea());
		textBox_circle_out_dimension->Text = System::Convert::ToString(d_inst->calculatedimension());
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
private: System::Void button_circle_slice_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (textBox_circle_slice_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_circle_slice_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		circle_slice^ d_inst = gcnew circle_slice(textBox_circle_slice_r->Text, textBox_circle_slice_a->Text);
		textBox_circle_slice_out_area->Text = System::Convert::ToString(d_inst->calculatearea());
		textBox_circle_slice_out_dimension->Text = System::Convert::ToString(d_inst->calculatedimension());
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
private: System::Void button_cuboid_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_cuboid_a->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_cuboid_b->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_cuboid_c->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		cuboid^ c_inst = gcnew cuboid(textBox_cuboid_a->Text, textBox_cuboid_b->Text, textBox_cuboid_c->Text);
		textBox_cuboid_out_area->Text = System::Convert::ToString(c_inst->calculatearea());
		textBox_cuboid_out_volume->Text = System::Convert::ToString(c_inst->calculatvolume());
		textBox_cuboid_out_diagonal->Text = System::Convert::ToString(c_inst->calculatediagonal());
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
private: System::Void button_prism_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{
		if (textBox_prism_ba->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_prism_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_prism_bc->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		prism^ p_inst = gcnew prism(textBox_prism_ba->Text, textBox_prism_h->Text, textBox_prism_bc->Text);
		textBox_prism_out_area->Text = System::Convert::ToString(p_inst->calculatearea());
		textBox_prism_out_volume->Text = System::Convert::ToString(p_inst->calculatvolume());
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
private: System::Void button_ball_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{
		if (textBox_ball_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		ball^ b_inst = gcnew ball(textBox_ball_r->Text);
		textBox_ball_out_area->Text = System::Convert::ToString(b_inst->calculatearea());
		textBox_ball_out_volume->Text = System::Convert::ToString(b_inst->calculatvolume());
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
private: System::Void button_cone_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_cone_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_cone_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		cone^ c_inst = gcnew cone(textBox_cone_r->Text, textBox_cone_h->Text);
		textBox_cone_out_area->Text = System::Convert::ToString(c_inst->calculatearea());
		textBox_cone_out_volume->Text = System::Convert::ToString(c_inst->calculatvolume());
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
private: System::Void button_cylinder_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (textBox_cylinder_r->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		if (textBox_cylinder_h->Text->Length == 0)
		{
			error^ a = gcnew error(empty, "empty_box");
			throw a;
		}
		cylinder^ c_inst = gcnew cylinder(textBox_cylinder_r->Text, textBox_cylinder_h->Text);
		textBox_cylinder_out_area->Text = System::Convert::ToString(c_inst->calculatearea());
		textBox_cylinder_out_volume->Text = System::Convert::ToString(c_inst->calculatvolume());
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
	Form::Close();
}
};
}
