#pragma once
#include <cmath>
#include <iomanip>
#include <math.h>
namespace Lz3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;







	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;







	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ обчислитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завдання1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завдання2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завдання1ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ завдання2ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ завданняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->обчислитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завдання1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завдання2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завдання1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завдання2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завданняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(723, 501);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(715, 472);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(67, 411);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Автор: Швець Наталія";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(101, 349);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(361, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(134, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(67, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть значення n ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(488, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обчислитиToolStripMenuItem,
					this->очиститиToolStripMenuItem, this->завданняToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(709, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// обчислитиToolStripMenuItem
			// 
			this->обчислитиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->завдання1ToolStripMenuItem,
					this->завдання2ToolStripMenuItem
			});
			this->обчислитиToolStripMenuItem->Name = L"обчислитиToolStripMenuItem";
			this->обчислитиToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->обчислитиToolStripMenuItem->Text = L"Обчислити";
			// 
			// завдання1ToolStripMenuItem
			// 
			this->завдання1ToolStripMenuItem->Name = L"завдання1ToolStripMenuItem";
			this->завдання1ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->завдання1ToolStripMenuItem->Text = L"Завдання1";
			this->завдання1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// завдання2ToolStripMenuItem
			// 
			this->завдання2ToolStripMenuItem->Name = L"завдання2ToolStripMenuItem";
			this->завдання2ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->завдання2ToolStripMenuItem->Text = L"Завдання2";
			this->завдання2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->завдання1ToolStripMenuItem1,
					this->завдання2ToolStripMenuItem1
			});
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			// 
			// завдання1ToolStripMenuItem1
			// 
			this->завдання1ToolStripMenuItem1->Name = L"завдання1ToolStripMenuItem1";
			this->завдання1ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->завдання1ToolStripMenuItem1->Text = L"Завдання1";
			this->завдання1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// завдання2ToolStripMenuItem1
			// 
			this->завдання2ToolStripMenuItem1->Name = L"завдання2ToolStripMenuItem1";
			this->завдання2ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->завдання2ToolStripMenuItem1->Text = L"Завдання2";
			this->завдання2ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// завданняToolStripMenuItem
			// 
			this->завданняToolStripMenuItem->Name = L"завданняToolStripMenuItem";
			this->завданняToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->завданняToolStripMenuItem->Text = L"Про програму";
			this->завданняToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::завданняToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(715, 472);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(385, 53);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(233, 164);
			this->listBox1->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(372, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 37);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(91, 389);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Автор: Швець Наталія";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(110, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(92, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"h";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(91, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(91, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"a";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 555);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		bool success = Int32::TryParse(textBox1->Text, n);

		if (!success || n <= 0) {
			label2->Text = "Помилка! Введіть коректне натуральне число.";
			return;
		}

		double result = n * sqrt(5.0);
		label2->Text = System::String::Format("{0:F2}", result);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		label2->Text = "";
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();  // Очищення списку перед табулюванням

		double a = -4, b = 1, h = 0.2;  // Початкові значення з фото
		double x = a;

		// Додаємо заголовки таблиці
		listBox1->Items->Add(" x\t| y ");
		listBox1->Items->Add("------------------");

		// Цикл для табулювання
		while (x <= b) {
			const double pi = 3.141592653589793;
			double y = 1.5 * cos(x - pi * pow(x, 2)); // Формула з фото

			// Додаємо рядок у ListBox
			listBox1->Items->Add(x.ToString("0.0") + "\t| " + y.ToString("0.0000"));

			x += h;  // Збільшуємо x на крок h
		};
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void завданняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("За даним натуральним значенням змінної n обчислює вираз");
	}
	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Автором є Швець Наталія студентка ВДПУ групи 3 СОМ");
	};
	}
	;
}