#pragma once
#include <stdlib.h>
#include <cstring>
#include <iostream>

namespace Editor2D {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	struct Drawing_list
	{
		int figure;
		int x1, y1, x2, y2;
		struct Drawing_list* next;
		struct Drawing_list* prev;
	};
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int wl = 4;
		MyForm(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(122, 26);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(416, 331);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Location = System::Drawing::Point(9, 93);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Rectangle";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Location = System::Drawing::Point(9, 124);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ellips";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 325);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(538, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(11, 285);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Color";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Undo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(72, 26);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Redo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(9, 61);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(50, 17);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Tag = L"";
			this->radioButton3->Text = L"Lines";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"4", L"6", L"8" });
			this->comboBox1->Location = System::Drawing::Point(8, 201);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Thickness";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 376);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ MyPen = gcnew Pen(Brushes::Black);		//створення пера чорного кольору
		Graphics^ MyGraphic; //створення об'єкта класу Graphics
		Bitmap^ bmp; //створення об'єкта класу Bitmap
		int x1, y1; // створення двох буферних змінних для збереження координат
		int width; // змінна, в якій зберігається ширина
		int height; // змінна, в якій зберігається висота
		bool Draw_ = false; // змінна, яка приймає значення true, якщо відбувається
		TextBox^ textBox1; // створення об'єкту класу TextBox для форми "запиту
		TextBox^ textBox2;
		Form^ form1;
		Drawing_list* head = NULL;
		Drawing_list* tail = NULL;
		void CreateNode(int figure, int x1, int y1, int x2, int y2)
		{
			if (head == NULL)
			{
				head = (Drawing_list*)malloc(sizeof(Drawing_list));
				head->figure = figure;
				head->x1 = x1;
				head->x2 = x2;
				head->y1 = y1;
				head->y2 = y2;
				head->next = NULL;
				head->prev = NULL;
			}
			else
			{
				Drawing_list *tmp = (Drawing_list*)malloc(sizeof(Drawing_list));
				tmp->figure = figure;
				tmp->x1 = x1;
				tmp->x2 = x2;
				tmp->y1 = y1;
				tmp->y2 = y2;
				tmp->prev = NULL;
				tmp->next = head;
				head->prev = tmp;
				head = tmp;
			}
		}
		void Delete_list()
		{
			Drawing_list* iter;
			while (head)
			{
				iter = head;
				head = head->next;
				free(iter);
			}
			head = NULL;
		}
		void Draw_figures()
		{
			Drawing_list* iter = head;
			while (iter)
			{
				switch (iter->figure)
				{
				case 0:
					MyGraphic->DrawRectangle(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 1:
					MyGraphic->DrawEllipse(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 2:
					MyGraphic->DrawLine(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
				default:
					break;
				}
				iter = iter->next;
			}
			button3->Enabled = true;
		}

		void Undo()
		{
			if (head != NULL)
			{
				head = head->next;
				Drawing_list* iter = head;
				while (iter)
				{
					switch (iter->figure)
					{
					case 0:
						MyGraphic->DrawRectangle(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					case 1:
						MyGraphic->DrawEllipse(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					case 2:
						MyGraphic->DrawLine(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					default:
						break;
					}
					iter = iter->next;
				}
				button4->Enabled = true;
			}
			else { button3->Enabled = false; }
		}
		void Redo()
		{
			if (head != NULL)
			{
				head = head->prev;
				Drawing_list* iter = head;
				if (head != NULL)
				{
					switch (iter->figure)
					{
					case 0:
						MyGraphic->DrawRectangle(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					case 1:
						MyGraphic->DrawEllipse(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					case 2:
						MyGraphic->DrawLine(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
						break;
					default:
						break;
					}
					iter = iter->prev;
					if (iter == NULL)
						button4->Enabled = false;
				}
				else { button4->Enabled = false; }
			}
			else { button4->Enabled = false; }
		}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {}

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		x1 = e->X;
		y1 = e->Y;
		Draw_ = true;
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e) {
		Draw_ = false;
		if (radioButton1->Checked)
		{
			MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->Y - y1);
			CreateNode(0, x1, y1, e->X - x1, e->Y - y1);
		}
		if (radioButton2->Checked)
		{
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->Y - y1);
			CreateNode(1, x1, y1, e->X - x1, e->Y - y1);
		}
		if (radioButton3->Checked)
		{
			MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y);
			CreateNode(2, x1, y1, e->X, e->Y);
		}
		pictureBox1->Invalidate();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Delete_list();
		MyGraphic->Clear(Color::White);
		pictureBox1->Invalidate();
		button3->Enabled = false;
		button4->Enabled = false;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::LightGray; // заливка форми в колір
		height = 500; //задавання розмірів
		width = 1000;
		bmp = gcnew System::Drawing::Bitmap(width, height); // створення нової бітової карти
		pictureBox1->Width = width; // задаємо розміри pictureBox
		pictureBox1->Height = height;
		pictureBox1->Image = bmp; // завантаження в pictureBox створеної бітової карти
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image); //підготовка
		MyGraphic->Clear(Color::White);
		button3->Enabled = false;
		button4->Enabled = false;
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender,
		System::EventArgs^ e) {
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->CheckPathExists = true;
		saveFileDialog1->Filter =
			"Bitmap File(*.bmp)|*.bmp|" +
			"GIF File(*.gif)|*.gif|" +
			"JPEG File(*.jpg)|*.jpg|" +
			"TIF File(*.tif)|*.tif|" +
			"PNG File(*.png)|*.png";
		saveFileDialog1->ShowHelp = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->pictureBox1->Image->Save(saveFileDialog1->FileName,
				System::Drawing::Imaging::ImageFormat::Bmp);
		}
	}
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^e) {
		Delete_list();
		bmp = gcnew System::Drawing::Bitmap(width, height);
		pictureBox1->Image = bmp; // завантаження в pictureBox створеної бітової карти
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image);//підготовка
		MyGraphic->Clear(Color::White); // очищення полотна та заливка його в білий колір
		pictureBox1->Invalidate();
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e) {
		if (Draw_ == true)
		{
			MyGraphic->Clear(Color::White);
			if (radioButton1->Checked == true) MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->Y - y1);
			if (radioButton2->Checked == true) MyGraphic->DrawEllipse(MyPen, x1, y1, e->X
				- x1, e->Y - y1);
			if (radioButton3->Checked == true) MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y);
			Draw_figures();
			pictureBox1->Invalidate();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		MyPen->Color = colorDialog1->Color;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		MyGraphic->Clear(Color::White);
		Undo();
		pictureBox1->Invalidate();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Redo();
		pictureBox1->Invalidate();
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedIndex == 0)
		{
			MyPen->Width = 1;
		}
		if (comboBox1->SelectedIndex == 1)
		{
			MyPen->Width = 2;
		}
		if (comboBox1->SelectedIndex == 2)
		{
			MyPen->Width = 4;
		}
		if (comboBox1->SelectedIndex == 3)
		{
			MyPen->Width = 6;

		}
		if (comboBox1->SelectedIndex == 4)
		{
			MyPen->Width = 8;
		}
	}

	private: System::Void openToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		}
	}
	};
}
