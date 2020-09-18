#pragma once
#include"stu_form.h"
#include"book_form.h"
#include"borrow_info.h"


namespace MyLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage1;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  age;
	private: System::Windows::Forms::TextBox^  addr;
	private: System::Windows::Forms::TextBox^  em;
	private: System::Windows::Forms::TextBox^  st;
	private: System::Windows::Forms::TextBox^  fn;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  bid;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  mi;
	private: System::Windows::Forms::TextBox^  sec;
	private: System::Windows::Forms::TextBox^  an;
	private: System::Windows::Forms::TextBox^  tit;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button16;





	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::TextBox^  book_search;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  title_book_search;
	private: System::Windows::Forms::RadioButton^  id_book_search;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  student_search;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  name_student_search;
	private: System::Windows::Forms::RadioButton^  id_student_search;
	private: System::Windows::Forms::ListBox^  head;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DateTimePicker^  end;

	private: System::Windows::Forms::DateTimePicker^  start;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ListBox^  listBox4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TabPage^  tabPage2;

private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::ListBox^  listBox6;
private: System::Windows::Forms::ListBox^  listBox7;
private: System::Windows::Forms::ListBox^  listBox8;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->addr = (gcnew System::Windows::Forms::TextBox());
			this->em = (gcnew System::Windows::Forms::TextBox());
			this->st = (gcnew System::Windows::Forms::TextBox());
			this->fn = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->bid = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->mi = (gcnew System::Windows::Forms::TextBox());
			this->sec = (gcnew System::Windows::Forms::TextBox());
			this->an = (gcnew System::Windows::Forms::TextBox());
			this->tit = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->end = (gcnew System::Windows::Forms::DateTimePicker());
			this->start = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->head = (gcnew System::Windows::Forms::ListBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->student_search = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->name_student_search = (gcnew System::Windows::Forms::RadioButton());
			this->id_student_search = (gcnew System::Windows::Forms::RadioButton());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->book_search = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->title_book_search = (gcnew System::Windows::Forms::RadioButton());
			this->id_book_search = (gcnew System::Windows::Forms::RadioButton());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1014, 460);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(0, 2);
			this->tabControl2->Margin = System::Windows::Forms::Padding(2);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1084, 427);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl2_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->id);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->age);
			this->tabPage4->Controls->Add(this->addr);
			this->tabPage4->Controls->Add(this->em);
			this->tabPage4->Controls->Add(this->st);
			this->tabPage4->Controls->Add(this->fn);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(1076, 401);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Student";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(947, 4);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 16);
			this->label21->TabIndex = 26;
			this->label21->Text = L"ID";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(874, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(44, 16);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Stage";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(729, 4);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 16);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Email";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(632, 3);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 16);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Address";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(568, 3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 16);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Age";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(438, 3);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(69, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Full Name";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(285, 262);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(136, 34);
			this->button12->TabIndex = 20;
			this->button12->Text = L"search";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// id
			// 
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(101, 267);
			this->id->Margin = System::Windows::Forms::Padding(2);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(168, 23);
			this->id->TabIndex = 19;
			this->id->TextChanged += gcnew System::EventHandler(this, &MyForm::id_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(15, 266);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"ID";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(285, 332);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(136, 34);
			this->button14->TabIndex = 17;
			this->button14->Text = L"Clear";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(441, 21);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(554, 344);
			this->listBox1->TabIndex = 16;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(285, 197);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 34);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(285, 136);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 34);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Remove";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(285, 76);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 34);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(285, 13);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 34);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(101, 67);
			this->age->Margin = System::Windows::Forms::Padding(2);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(168, 23);
			this->age->TabIndex = 10;
			this->age->TextChanged += gcnew System::EventHandler(this, &MyForm::age_TextChanged);
			// 
			// addr
			// 
			this->addr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addr->Location = System::Drawing::Point(101, 116);
			this->addr->Margin = System::Windows::Forms::Padding(2);
			this->addr->Name = L"addr";
			this->addr->Size = System::Drawing::Size(168, 23);
			this->addr->TabIndex = 9;
			this->addr->TextChanged += gcnew System::EventHandler(this, &MyForm::addr_TextChanged);
			// 
			// em
			// 
			this->em->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->em->Location = System::Drawing::Point(101, 167);
			this->em->Margin = System::Windows::Forms::Padding(2);
			this->em->Name = L"em";
			this->em->Size = System::Drawing::Size(168, 23);
			this->em->TabIndex = 8;
			this->em->TextChanged += gcnew System::EventHandler(this, &MyForm::e_TextChanged);
			// 
			// st
			// 
			this->st->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->st->Location = System::Drawing::Point(101, 211);
			this->st->Margin = System::Windows::Forms::Padding(2);
			this->st->Name = L"st";
			this->st->Size = System::Drawing::Size(168, 23);
			this->st->TabIndex = 7;
			this->st->TextChanged += gcnew System::EventHandler(this, &MyForm::st_TextChanged);
			// 
			// fn
			// 
			this->fn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fn->Location = System::Drawing::Point(101, 18);
			this->fn->Margin = System::Windows::Forms::Padding(2);
			this->fn->Name = L"fn";
			this->fn->Size = System::Drawing::Size(168, 23);
			this->fn->TabIndex = 6;
			this->fn->TextChanged += gcnew System::EventHandler(this, &MyForm::fn_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 215);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Stage";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 171);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 121);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 72);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Age";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label27);
			this->tabPage5->Controls->Add(this->label26);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->button17);
			this->tabPage5->Controls->Add(this->button11);
			this->tabPage5->Controls->Add(this->bid);
			this->tabPage5->Controls->Add(this->label11);
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Controls->Add(this->mi);
			this->tabPage5->Controls->Add(this->sec);
			this->tabPage5->Controls->Add(this->an);
			this->tabPage5->Controls->Add(this->tit);
			this->tabPage5->Controls->Add(this->label8);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(1076, 401);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Book";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(584, 10);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(86, 16);
			this->label27->TabIndex = 30;
			this->label27->Text = L"Author Name";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(690, 10);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(53, 16);
			this->label26->TabIndex = 29;
			this->label26->Text = L"Section";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(774, 10);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(107, 16);
			this->label25->TabIndex = 28;
			this->label25->Text = L"More Information";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(897, 9);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(21, 16);
			this->label24->TabIndex = 27;
			this->label24->Text = L"ID";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(487, 10);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 16);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Title";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(334, 285);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(136, 34);
			this->button17->TabIndex = 25;
			this->button17->Text = L"search";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(334, 350);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(136, 34);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Clear";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// bid
			// 
			this->bid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bid->Location = System::Drawing::Point(142, 291);
			this->bid->Margin = System::Windows::Forms::Padding(2);
			this->bid->Name = L"bid";
			this->bid->Size = System::Drawing::Size(173, 23);
			this->bid->TabIndex = 23;
			this->bid->TextChanged += gcnew System::EventHandler(this, &MyForm::bid_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(13, 296);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"ID";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 17;
			this->listBox2->Location = System::Drawing::Point(488, 27);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(516, 344);
			this->listBox2->TabIndex = 21;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(334, 219);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 34);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(334, 150);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 34);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Remove";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(334, 88);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 34);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Save";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(334, 19);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 34);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Add";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// mi
			// 
			this->mi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mi->Location = System::Drawing::Point(142, 225);
			this->mi->Margin = System::Windows::Forms::Padding(2);
			this->mi->Name = L"mi";
			this->mi->Size = System::Drawing::Size(173, 23);
			this->mi->TabIndex = 8;
			this->mi->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// sec
			// 
			this->sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sec->Location = System::Drawing::Point(142, 155);
			this->sec->Margin = System::Windows::Forms::Padding(2);
			this->sec->Name = L"sec";
			this->sec->Size = System::Drawing::Size(173, 23);
			this->sec->TabIndex = 7;
			this->sec->TextChanged += gcnew System::EventHandler(this, &MyForm::sec_TextChanged);
			// 
			// an
			// 
			this->an->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->an->Location = System::Drawing::Point(142, 87);
			this->an->Margin = System::Windows::Forms::Padding(2);
			this->an->Name = L"an";
			this->an->Size = System::Drawing::Size(173, 23);
			this->an->TabIndex = 6;
			this->an->TextChanged += gcnew System::EventHandler(this, &MyForm::an_TextChanged);
			// 
			// tit
			// 
			this->tit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tit->Location = System::Drawing::Point(142, 21);
			this->tit->Margin = System::Windows::Forms::Padding(2);
			this->tit->Name = L"tit";
			this->tit->Size = System::Drawing::Size(173, 23);
			this->tit->TabIndex = 5;
			this->tit->TextChanged += gcnew System::EventHandler(this, &MyForm::tit_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 231);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(114, 17);
			this->label8->TabIndex = 4;
			this->label8->Text = L"More Information";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(13, 161);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Section";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 92);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Auther Name";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 27);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Title";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->panel1);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Margin = System::Windows::Forms::Padding(2);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1014, 460);
			this->tabPage6->TabIndex = 3;
			this->tabPage6->Text = L"Borrow";
			this->tabPage6->UseVisualStyleBackColor = true;
			this->tabPage6->Click += gcnew System::EventHandler(this, &MyForm::tabPage6_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->listBox4);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->head);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->student_search);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->listBox3);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->listBox5);
			this->panel1->Controls->Add(this->book_search);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->splitter1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1014, 460);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(420, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 46);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Borrow Information";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(98, 284);
			this->listBox4->Margin = System::Windows::Forms::Padding(2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(42, 17);
			this->listBox4->TabIndex = 27;
			this->listBox4->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->end);
			this->groupBox3->Controls->Add(this->start);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(601, 293);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(359, 125);
			this->groupBox3->TabIndex = 26;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Date Line";
			// 
			// end
			// 
			this->end->Location = System::Drawing::Point(106, 80);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(224, 23);
			this->end->TabIndex = 3;
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(106, 34);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(224, 23);
			this->start->TabIndex = 2;
			this->start->ValueChanged += gcnew System::EventHandler(this, &MyForm::start_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(31, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 16);
			this->label13->TabIndex = 1;
			this->label13->Text = L"End";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(31, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Start";
			// 
			// head
			// 
			this->head->FormattingEnabled = true;
			this->head->Location = System::Drawing::Point(34, 284);
			this->head->Margin = System::Windows::Forms::Padding(2);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(36, 17);
			this->head->TabIndex = 25;
			this->head->Visible = false;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(868, 127);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(28, 28);
			this->button13->TabIndex = 24;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// student_search
			// 
			this->student_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->student_search->Location = System::Drawing::Point(622, 127);
			this->student_search->Margin = System::Windows::Forms::Padding(2);
			this->student_search->Name = L"student_search";
			this->student_search->Size = System::Drawing::Size(242, 28);
			this->student_search->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->name_student_search);
			this->groupBox1->Controls->Add(this->id_student_search);
			this->groupBox1->Location = System::Drawing::Point(559, 60);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(420, 36);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			// 
			// name_student_search
			// 
			this->name_student_search->AutoSize = true;
			this->name_student_search->Location = System::Drawing::Point(264, 11);
			this->name_student_search->Margin = System::Windows::Forms::Padding(2);
			this->name_student_search->Name = L"name_student_search";
			this->name_student_search->Size = System::Drawing::Size(52, 17);
			this->name_student_search->TabIndex = 1;
			this->name_student_search->TabStop = true;
			this->name_student_search->Text = L"Name";
			this->name_student_search->UseVisualStyleBackColor = true;
			this->name_student_search->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// id_student_search
			// 
			this->id_student_search->AutoSize = true;
			this->id_student_search->Location = System::Drawing::Point(83, 11);
			this->id_student_search->Margin = System::Windows::Forms::Padding(2);
			this->id_student_search->Name = L"id_student_search";
			this->id_student_search->Size = System::Drawing::Size(36, 17);
			this->id_student_search->TabIndex = 0;
			this->id_student_search->TabStop = true;
			this->id_student_search->Text = L"ID";
			this->id_student_search->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(559, 178);
			this->listBox3->Margin = System::Windows::Forms::Padding(2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(420, 82);
			this->listBox3->TabIndex = 21;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(429, 291);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(112, 52);
			this->button16->TabIndex = 20;
			this->button16->Text = L"Borrow";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(718, 14);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 24);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Student";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->Location = System::Drawing::Point(344, 125);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(28, 30);
			this->button15->TabIndex = 11;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(34, 178);
			this->listBox5->Margin = System::Windows::Forms::Padding(2);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(420, 82);
			this->listBox5->TabIndex = 10;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox5_SelectedIndexChanged);
			// 
			// book_search
			// 
			this->book_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->book_search->Location = System::Drawing::Point(98, 125);
			this->book_search->Margin = System::Windows::Forms::Padding(2);
			this->book_search->Name = L"book_search";
			this->book_search->Size = System::Drawing::Size(242, 28);
			this->book_search->TabIndex = 9;
			this->book_search->TextChanged += gcnew System::EventHandler(this, &MyForm::book_search_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label18.Image")));
			this->label18->Location = System::Drawing::Point(351, 127);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 8;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->title_book_search);
			this->groupBox2->Controls->Add(this->id_book_search);
			this->groupBox2->Location = System::Drawing::Point(34, 60);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(420, 36);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// title_book_search
			// 
			this->title_book_search->AutoSize = true;
			this->title_book_search->Location = System::Drawing::Point(264, 11);
			this->title_book_search->Margin = System::Windows::Forms::Padding(2);
			this->title_book_search->Name = L"title_book_search";
			this->title_book_search->Size = System::Drawing::Size(45, 17);
			this->title_book_search->TabIndex = 1;
			this->title_book_search->TabStop = true;
			this->title_book_search->Text = L"Title";
			this->title_book_search->UseVisualStyleBackColor = true;
			this->title_book_search->CheckedChanged += gcnew System::EventHandler(this, &MyForm::title_book_search_CheckedChanged);
			// 
			// id_book_search
			// 
			this->id_book_search->AutoSize = true;
			this->id_book_search->Location = System::Drawing::Point(83, 11);
			this->id_book_search->Margin = System::Windows::Forms::Padding(2);
			this->id_book_search->Name = L"id_book_search";
			this->id_book_search->Size = System::Drawing::Size(36, 17);
			this->id_book_search->TabIndex = 0;
			this->id_book_search->TabStop = true;
			this->id_book_search->Text = L"ID";
			this->id_book_search->UseVisualStyleBackColor = true;
			this->id_book_search->CheckedChanged += gcnew System::EventHandler(this, &MyForm::id_book_search_CheckedChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(205, 14);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 24);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Book";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(484, 460);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			this->splitter1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &MyForm::splitter1_SplitterMoved);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1022, 486);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			this->tabControl1->Click += gcnew System::EventHandler(this, &MyForm::tabControl1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox8);
			this->tabPage2->Controls->Add(this->listBox7);
			this->tabPage2->Controls->Add(this->listBox6);
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->dateTimePicker1);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1014, 460);
			this->tabPage2->TabIndex = 4;
			this->tabPage2->Text = L"Return Book";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(959, 50);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(47, 17);
			this->listBox8->TabIndex = 9;
			this->listBox8->Visible = false;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(17, 107);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(974, 290);
			this->listBox7->TabIndex = 8;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(957, 27);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(49, 17);
			this->listBox6->TabIndex = 7;
			this->listBox6->Visible = false;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(482, 56);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(145, 35);
			this->button19->TabIndex = 6;
			this->button19->Text = L"Return";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(8, 14);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(348, 36);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(191, 13);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(45, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Title";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(26, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ID";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged_1);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(239, 56);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(117, 35);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Search";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(957, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(49, 20);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(796, 53);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 34);
			this->button8->TabIndex = 1;
			this->button8->Text = L"load";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1022, 486);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyLibrary";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	
			//add information that user write at that textboxs to the listbox
			 StreamReader^ sr=gcnew StreamReader("All_Student.txt");
			bool stutas=true,empty=true;
			for (int i=0 ; i < listBox1->Items->Count ; i++)
				{
					String^ row=Convert::ToString(listBox1->Items[i]);
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
				    if(id->Text+"  "==arr[5])
				    {
						stutas=false;	
					}
					 if(id->Text==arr[5])
				    {
						stutas=false;	
					}
			 }
			if(fn->Text==""||age->Text==""||addr->Text==""||em->Text==""||st->Text==""||id->Text=="")
				empty=false;
			if(stutas&&empty){
			 String^ stu_info=fn->Text+"  \t"+age->Text+"  \t"+addr->Text+"  \t"+em->Text+"  \t"+st->Text+"  \t"+id->Text+"  \t";
			 listBox1->Items->Add(stu_info);
			 }
			 else if(stutas){
					 MessageBox::Show("blease complet the information !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 else{
				 MessageBox::Show("This Student already Exist !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();
		 }
private: System::Void e_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //add date from listbox to student file
			StreamWriter^ wr=gcnew StreamWriter("All_Student.txt");
			for(int i=0;i<listBox1->Items->Count;i++)
			{
			wr->WriteLine(listBox1->Items[i]);
			}
			wr->Close();
		 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex!=-1)
			 {
				 clear_stu();
				 String ^ StdData= listBox1->SelectedItem->ToString();
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = StdData->Split(splitChars , StringSplitOptions::None );
				 fn->Text=result[0];
				 age->Text=result[1];
				 addr->Text=result[2];
				 em->Text=result[3];
				 st->Text=result[4];
				 id->Text=result[5];
			 }
			
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //remove this date that selected from listbox from student file 
			 listBox1->Items->Remove(listBox1->Text);
			 StreamWriter^ wr=gcnew StreamWriter("All_Student.txt");
			for(int i=0;i<listBox1->Items->Count;i++)
			{
			wr->WriteLine(listBox1->Items[i]);
			}
			wr->Close();
		 }
	void clear_stu()
	{
		fn->Text="";
		age->Text="";
		addr->Text="";
		em->Text="";
		st->Text="";
		id->Text="";
	}
	void clear_book()
	{
		tit->Text="";
		an->Text="";
		sec->Text="";
		mi->Text="";
		bid->Text="";
	}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //clear all date from text box 
			 clear_stu();

		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 // add all data from text boxs to list box
			 
			 bool stutas=true,empte=true;

			array<Char>^ splitter={'\t'};
			 for (int i=0 ; i < listBox2->Items->Count ; i++)
				{
					String^ row=Convert::ToString(listBox2->Items[i]);
			       	array<String^>^ arr=row->Split(splitter);
				    if(bid->Text==arr[4])
				    {
						stutas=false;	
					}
					if(bid->Text+"  "==arr[4])
				    {
						stutas=false;	
					}
			 }
			 StreamReader^ sr=gcnew StreamReader("Borrowed_Books.txt");
				while(!sr->EndOfStream)
				{
					String^ rowbow=Convert::ToString(sr->ReadLine());
			       	array<String^>^ arrbow=rowbow->Split(splitter);
					if(bid->Text+"  "==arrbow[6]){
							stutas=false;
					}
				}  
			 sr->Close();
			 if(tit->Text==""||an->Text==""||sec->Text==""||mi->Text==""||bid->Text=="")
				 empte=false;
				 

			 if(stutas&&empte){
			 String^ book_info=tit->Text+"  \t"+an->Text+"  \t"+sec->Text+"  \t"+mi->Text+"  \t"+bid->Text+"  ";
			 listBox2->Items->Add(book_info);
			 }
			 else if(stutas){
					 MessageBox::Show("blease complet the information !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 else{
				 MessageBox::Show("This Book already Exist !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // save all data from list box to book file
			 StreamWriter^ wr=gcnew StreamWriter("All_Books.txt");
			for(int i=0;i<listBox2->Items->Count;i++)
			{
			wr->WriteLine(listBox2->Items[i]);
			}
			wr->Close();
		 }

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 // remove selected data from book file 
			 listBox2->Items->Remove(listBox2->Text);
			 StreamWriter^ wr=gcnew StreamWriter("All_Books.txt");
			for(int i=0;i<listBox2->Items->Count;i++)
			{
			wr->WriteLine(listBox2->Items[i]);
			}
			wr->Close();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //clear all date from text box 
			 clear_book(); 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ubdate data that selected from listbox 
			 String^ stu_info=fn->Text+"\t"+age->Text+"\t"+addr->Text+"\t"+em->Text+"\t"+st->Text+"\t"+id->Text;
			 int ind = listBox1->SelectedIndex;
			 StreamReader^ sr=gcnew StreamReader("All_Student.txt");
			bool stutas=true;
			for (int i = 0; i < listBox1->Items->Count; i++)
				{
					String^ row=Convert::ToString(listBox1->Items[i]);
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
				    if(id->Text+"  "==arr[5])
				    {
						stutas=false;	
					}
					 if(id->Text==arr[5])
				    {
						stutas=false;	
					}
			 }
			 sr->Close();
			 if(stutas){
			 listBox1->Items[ind]=stu_info;
			 StreamWriter^ wr=gcnew StreamWriter("All_Student.txt");
			for(int i=0;i<listBox1->Items->Count;i++)
			{
			wr->WriteLine(listBox1->Items[i]);
			}
			wr->Close();
			 }
			 else{
				 MessageBox::Show("This Student already Exist !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox2->SelectedIndex!=-1)
			 {
				 clear_book();
				 String ^ StdData= listBox2->SelectedItem->ToString();
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = StdData->Split(splitChars , StringSplitOptions::None );
				 tit->Text=result[0];
				 an->Text=result[1];
				 sec->Text=result[2];
				 mi->Text=result[3];
				 bid->Text=result[4];
			 }




		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 /ubdate data that selected from listbox 
			 String^ book_info=tit->Text+"\t"+an->Text+"\t"+sec->Text+"\t"+mi->Text+"\t"+bid->Text;
			int ind = listBox2->SelectedIndex;
			bool stutas=true;
			array<Char>^ splitter={'\t'};
			StreamReader^ sr=gcnew StreamReader("All_Books.txt");
			for (int i = 0; i < listBox2->Items->Count; i++)
				{
					String^ row=Convert::ToString(listBox2->Items[i]);
			       	array<String^>^ arr=row->Split(splitter);
				    if(bid->Text+"  "==arr[4])
				    {
						stutas=false;	
					}
					 if(bid->Text==arr[4])
				    {
						stutas=false;	
					}
			 }
			sr->Close();
			 StreamReader^ ub=gcnew StreamReader("Borrowed_Books.txt");
				while(!ub->EndOfStream)
				{
					String^ ubrowbow=Convert::ToString(ub->ReadLine());
			       	array<String^>^ ubarrbow=ubrowbow->Split(splitter);
					if(bid->Text+"  "==ubarrbow[6]){
							stutas=false;
					}
				}  
				ub->Close();
			 if(stutas){
			 listBox2->Items[ind]=book_info;
			 StreamWriter^ wr=gcnew StreamWriter("All_Books.txt");
			for(int i=0;i<listBox2->Items->Count;i++)
			{
			wr->WriteLine(listBox2->Items[i]);
			}
			wr->Close();
			 }
			 else{-
				 MessageBox::Show("This Book already Exist !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 
		 }
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void listBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
		 }

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //open form to search for an excisting student 
			 stu_form^frm=gcnew stu_form();
		     frm->ShowDialog();
		 }
private: System::Void stu_id_sea_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void tabControl2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void age_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void addr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void st_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fn_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage5_Click(System::Object^  sender, System::EventArgs^  e) {

			 		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			  //open form to search for an excisting book
			 book_form^frm=gcnew book_form();
		     frm->ShowDialog();
		 }
private: System::Void bid_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void sec_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void an_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tit_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			  /****************************************************
			 *take what u select from book search
			 *take what u select from student search
			 *take startdate and deadline
			 *add the information to borrowed file 
			 *delete this book from book file to be unavilable to borrow again 
			 *****************************************************/

			 StreamReader ^iinfo=gcnew StreamReader("Borrowed_Books.txt");
			  while(!iinfo->EndOfStream){
				  head->Items->Add(iinfo->ReadLine());
			 }
			  iinfo->Close();
			  if(listBox3->SelectedItem && listBox5->SelectedItem){
			  StreamWriter ^info=gcnew StreamWriter("Borrowed_Books.txt");
			  String ^ book= listBox5->SelectedItem->ToString();
			  String ^ student= listBox3->SelectedItem->ToString();
			  String ^ st= Convert::ToString(start->Value);
			  String ^ en= Convert::ToString(end->Value);
			 
				array<String^>^result_book;
				array<String^>^result_student;
				array<Char>^splitChars = {'\t'};
				result_book = book->Split(splitChars , StringSplitOptions::None );
				result_student = student->Split(splitChars , StringSplitOptions::None );
				String ^data = result_student[5]+"\t"+result_student[0]+"\t"+book+"\t"+st+"\t"+en+"\t";
				head->Items->Add(data);
				for(int i=0;i<head->Items->Count;i++)
					{
						info->WriteLine(head->Items[i]);
					}
				head->Items->Clear();
				info->Close();
				StreamReader ^all=gcnew StreamReader("All_Books.txt");
				while(!all->EndOfStream){
					listBox4->Items->Add(all->ReadLine());
				}
				all->Close();
				
				StreamWriter ^allwr=gcnew StreamWriter("All_Books.txt");
				for(int i=0;i<listBox4->Items->Count;i++){
					String^ bookboe = listBox4->Items[i]->ToString();
					array<String^>^list;
					array<Char>^splitChars = {'\t'};
					list = bookboe->Split(splitChars , StringSplitOptions::None );
					if(list[4]==result_book[4]){
					
					}
					else{
						allwr->WriteLine(bookboe);
					}
				
				}
				allwr->Close();
				
				listBox5->Items->Remove(listBox5->Text);
				listBox3->Items->Remove(listBox3->Text);
			  }
			  else{
				 MessageBox::Show("Please Select Item !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			  }
			  head->Items->Clear();
			  listBox4->Items->Clear();
		

		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 /****************************************************
			 *this button search in book file to borrow
			 *****************************************************/

			 listBox5->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("All_Books.txt");
			 if(id_book_search->Checked){         
				 //load what u search about at book file  by Id
				while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(book_search->Text+"  "==arr[4]){
						listBox5->Items->Add(row);	
					}
				}  
			 }
			 else if(title_book_search->Checked){
				 //load what u search about at book file by title
				 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(book_search->Text+"  "==arr[0]){
						listBox5->Items->Add(row);	
					}
				}
			 }
			 else{
				 MessageBox::Show("Please Select ID Or Title" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();
		 }
private: System::Void listBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void book_search_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void title_book_search_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void id_book_search_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			  /****************************************************
			 *this button load what u search about at student file
			 *****************************************************/
			 listBox3->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("All_Student.txt");
			 if(id_student_search->Checked){
				 //search at student file by id
				while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(student_search->Text+"  "==arr[5]){
						listBox3->Items->Add(row);	
					}
				}  
			 }
			 else if(name_student_search->Checked){
				 //search at student file by name
				 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(student_search->Text+"  "==arr[0]){
						listBox3->Items->Add(row);	
					}
				}
			 }
			 else{
				 MessageBox::Show("Please Select ID Or Name" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();

		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^ re=gcnew StreamReader("All_Student.txt");
			 listBox1->Items->Clear();
			 while(!re->EndOfStream){
				 listBox1->Items->Add(re->ReadLine());
			 }
			 re->Close();
			 StreamReader^ reb=gcnew StreamReader("All_Books.txt");
			 listBox2->Items->Clear();
			 while(!reb->EndOfStream){
				 listBox2->Items->Add(reb->ReadLine());
			 }
			 reb->Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //open form that have a list to load all borrowed books
			 borrow_info^frm=gcnew borrow_info();
			 frm->ShowDialog();
			
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*************************************
			 *load all borrowed books that should return at the same date 
			 *************************************/
			 listBox7->Items->Clear();
			 String ^ now= Convert::ToString(dateTimePicker1->Value);
			 array<Char>^ splitters={' '};
			 array<String^>^ arrnow=now->Split(splitters);

			 StreamReader^ sr=gcnew StreamReader("Borrowed_Books.txt");
			 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
				   array<String^>^ arrlast=arr[8]->Split(splitters);

					if(arrnow[0]==arrlast[0])
				    {
						listBox7->Items->Add(row);
					}
			 }
			 sr->Close();
		 }
private: System::Void start_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*************************************************
			 *search at borrowed books file about what u want 
			 **************************************************/
			 listBox7->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("Borrowed_Books.txt");
			 if(radioButton1->Checked){
				 //search at books file by ID
				while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(textBox1->Text+"  "==arr[6]){
						listBox7->Items->Add(row);	
					}
				}  
			 }
			 else if(radioButton2->Checked){
				 //search at book file by title
				 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(textBox1->Text+"  "==arr[2]){
						listBox7->Items->Add(row);	
					}
				}
			 }
			 else{
				 MessageBox::Show("Please Select ID Or Title" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 /********************************************************
			 *take information that selected from list box
			 *delete these information from borrowed file 
			 *add this book again to book file to be available to borrow again
			 ********************************************************/
			 if(listBox7->SelectedItem ){
			  listBox6->Items->Clear();
			 StreamReader^ hg=gcnew StreamReader("Borrowed_Books.txt");
			 while(!hg->EndOfStream){
				 listBox6->Items->Add(hg->ReadLine());
			 }
			 hg->Close();
			 String^ noww=Convert::ToString(listBox7->SelectedItem);
			 array<Char>^ splitter={'\t'};
			 array<String^>^ arr=noww->Split(splitter);
			 /********************************/
			 String^ bookre=arr[2]+"\t"+arr[3]+"\t"+arr[4]+"\t"+arr[5]+"\t"+arr[6];
			 listBox8->Items->Clear();
			 StreamReader^ bo=gcnew StreamReader("All_Books.txt");
			 while(!bo->EndOfStream){
				 listBox8->Items->Add(bo->ReadLine());
			 }
			 bo->Close();
			 listBox8->Items->Add(bookre);
			 StreamWriter^ bore=gcnew StreamWriter("All_Books.txt");
			 for (int i = 0; i < listBox8->Items->Count; i++)
			 {
				 bore->WriteLine(listBox8->Items[i]);

			 }
			bore->Close();
			 StreamWriter^ hgwr=gcnew StreamWriter("Borrowed_Books.txt");
			 for (int i = 0; i < listBox6->Items->Count; i++)
			 {
				 String^ now=listBox6->Items[i]->ToString();
				 array<String^>^ arrnow=now->Split(splitter);
				 String^ bookrenow=arrnow[2]+"\t"+arrnow[3]+"\t"+arrnow[4]+"\t"+arrnow[5]+"\t"+arrnow[6];
				 if(bookrenow!=bookre){
					 hgwr->WriteLine(now);
				 }
			 }
			 hgwr->Close();
			
			listBox7->Items->Remove(listBox7->Text); 
			 
			 }
			 else{
				 MessageBox::Show("Please Select Item you want to return !" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }


		 }
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
