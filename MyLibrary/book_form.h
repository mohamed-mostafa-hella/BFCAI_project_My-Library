#pragma once

namespace MyLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for book_form
	/// </summary>
	public ref class book_form : public System::Windows::Forms::Form
	{
	public:
		book_form(void)
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
		~book_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^  splitter1;





	private: System::Windows::Forms::ListBox^  listBox5;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  name_book_search;
	private: System::Windows::Forms::RadioButton^  id_book_search;


	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  book_search;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(book_form::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->name_book_search = (gcnew System::Windows::Forms::RadioButton());
			this->id_book_search = (gcnew System::Windows::Forms::RadioButton());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->book_search = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(1044, 610);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(143, 278);
			this->listBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(752, 244);
			this->listBox5->TabIndex = 15;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(504, 28);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 29);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Book";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->name_book_search);
			this->groupBox1->Controls->Add(this->id_book_search);
			this->groupBox1->Location = System::Drawing::Point(274, 116);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(560, 44);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			// 
			// name_book_search
			// 
			this->name_book_search->AutoSize = true;
			this->name_book_search->Location = System::Drawing::Point(352, 14);
			this->name_book_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_book_search->Name = L"name_book_search";
			this->name_book_search->Size = System::Drawing::Size(56, 21);
			this->name_book_search->TabIndex = 1;
			this->name_book_search->TabStop = true;
			this->name_book_search->Text = L"Title";
			this->name_book_search->UseVisualStyleBackColor = true;
			// 
			// id_book_search
			// 
			this->id_book_search->AutoSize = true;
			this->id_book_search->Location = System::Drawing::Point(111, 14);
			this->id_book_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_book_search->Name = L"id_book_search";
			this->id_book_search->Size = System::Drawing::Size(42, 21);
			this->id_book_search->TabIndex = 0;
			this->id_book_search->TabStop = true;
			this->id_book_search->Text = L"ID";
			this->id_book_search->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(686, 198);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(37, 34);
			this->button13->TabIndex = 30;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &book_form::button13_Click);
			// 
			// book_search
			// 
			this->book_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->book_search->Location = System::Drawing::Point(358, 198);
			this->book_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->book_search->Name = L"book_search";
			this->book_search->Size = System::Drawing::Size(321, 34);
			this->book_search->TabIndex = 29;
			// 
			// book_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1047, 610);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->book_search);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->splitter1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"book_form";
			this->Text = L"book_form";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			 
private: System::Void id_book_search_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			  listBox5->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("All_Books.txt");
			 if(id_book_search->Checked){
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
			 else if(name_book_search->Checked){
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
};
}
