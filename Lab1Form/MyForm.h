#pragma once

namespace Lab1Form {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(416, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(183, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(416, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(124, 55);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(81, 20);
			this->numericUpDown1->TabIndex = 4;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(519, 55);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(81, 20);
			this->numericUpDown2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Максимальная степень полинома 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(461, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Максимальная степень полинома 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ввод коэффициентов полинома 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(473, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ввод коэффициентов полинома 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(140, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(544, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"...";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(140, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Сумма полиномов";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(100, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Произведение полиномов";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(268, 196);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"...";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(268, 227);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 330);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Визуал. Лаб. №1. Вариант 10. Сложение и произведение полиномов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ')) return;
		//  разрешаем вводить циферки от 0 до 9, пробел, бекспейс (чтобы удалить элемент)
		e->Handled = true;
	}

			 void ShowPolymon(String^ &str, int* polynom, int size)
			 {

				 for (int i = size; i >= 0; i--)
				 {
					 int ai = polynom[i];		// получаем коэффициент
					 if (ai == 0) continue; 
					 if (i == 0)		// если это последний коэффициент
					 {
						 if (ai > 0) str = str->Format(str + "+{0}", ai); // то выводим без x
						 else if (ai < 0) str = str->Format(str + "{0}", ai);
					 }
					 else if (i == 1)			// если это последний коэффициент полинома
					 {
						 if (ai > 0) str = str->Format(str + "+{0}x", ai); // то выводим c x без степени
						 else if (ai < 0) str = str->Format(str + "{0}x", ai);
					 }
					 else 
					 {
						 if (ai > 0) str = str->Format(str + "+{0}x^{1}", ai, i);  
						 else if (ai < 0) str = str->Format(str + "{0}x^{1}", ai, i);
					 }
				 }
			 }


			 void SummaPolinom(int *sum1, int size1, int *sum2, int size2, int *&result, int size_result) // оператор сложения
			 {
				 int i;		
				 int min = size2;					// минимальный размер полинома
				 if (size2 > size1)	min = size1; 

				 for (i = 0; i <= min; i++) 
					 result[i] = sum1[i] + sum2[i];
				 if (size1 < size2)      // сравниваем, какой полином больше
				 {
					 for (i = min + 1; i <= size2; i++) 
						 result[i] = sum2[i];
				 }
				 else
				 {
					 for (i = min + 1; i <= size1; i++) result[i] = sum1[i];
				 }
			 }

			 void ProizvedPolinom(int *pr1, int size1, int *pr2, int size2, int *&result, int size_result) // оператор произведения коэффициентов
			 {
				 int i, j, k;
				 double s;   // произведение
				 for (i = 0; i <= size1 + size2; i++)			// считаем для каждого члена полинома новый коэффициент
				 {
					 s = 0; 
					 for (j = 0; j <= size1; j++)
						 for (k = 0; k <= size2; k++)
							 if (j + k == i) s = s + pr1[j] * pr2[k]; 
					 result[i] = s; 
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int size_array1 = System::Convert::ToInt32(numericUpDown1->Value);		 // переводим в переменную значение размера полинома1;
		int size_array2 = System::Convert::ToInt32(numericUpDown2->Value);		// переводим в переменную значение размера полинома2

		String^ str = "";                             
		array<String^>^ as;                           // массив строк, в котором будут временно храниться числа
		array<Char>^ ar;  
		ar = gcnew array<Char>(1);                  // создаём стоку в массиве char
		// полином 1
		ar[0] = ' ';
		as = textBox1->Text->Split(ar);				 // переводим в массив все значения
		if (as->Length != size_array1 + 1 || as[0] == "") 
		{
			MessageBox::Show("Не введены все данные данные для полинома №1 или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}
		int *polynom1 = new int[size_array1 + 1]; 
		for (int i = size_array1; i >= 0; i--) 
		{
			polynom1[i] = Convert::ToInt32(as[size_array1 - i]);
		}
		//полином 2
		array<String^>^ as2;
		ar[0] = ' ';
		as2 = textBox2->Text->Split(ar);			
		if (as2->Length != size_array2 + 1 || as2[0] == "") 
		{
			MessageBox::Show("Не введены все данные данные для полинома №2 или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}
		int *polynom2 = new int[size_array2 + 1]; 
		for (int i = size_array2; i >= 0; i--) 
		{
			polynom2[i] = Convert::ToInt32(as2[size_array2 - i]);
		}

	
		ShowPolymon(str, polynom1, size_array1); // показываем функцию
		label5->Text = str; 
		str = "";
		ShowPolymon(str, polynom2, size_array2);
		label6->Text = str; 


		// Операция складывания полиномов
		int sumpolyn_size = size_array1; 
		if (size_array2 > size_array1)	sumpolyn_size = size_array2; 
		int *sumpolyn = new int[sumpolyn_size + 1]; 
		SummaPolinom(polynom1, size_array1, polynom2, size_array2, sumpolyn, sumpolyn_size); // находим сумму

		
		str = ""; // чистим строку вывода
		ShowPolymon(str, sumpolyn, sumpolyn_size);
		label9->Text = str; // строку выводим в бокс "Сумма полиномов"

	
		int proizvpolyn_size = size_array1 + size_array2; 
		int *proizvpolyn = new int[proizvpolyn_size + 1];
		ProizvedPolinom(polynom1, size_array1, polynom2, size_array2, proizvpolyn, proizvpolyn_size); // находим произведение

		
		str = ""; 
		ShowPolymon(str, proizvpolyn, proizvpolyn_size);
		label10->Text = str; 

		button1->Enabled = false; // Меняем активность кнопок
		button2->Enabled = true; // Делаем активной "Очистить"
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// Чистим все боксы от мусора
		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Value = 0;
		numericUpDown2->Value = 0;
		label5->Text = "...";
		label6->Text = "...";
		label9->Text = "...";
		label10->Text = "...";
		button1->Enabled = true;
		button2->Enabled = false;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}