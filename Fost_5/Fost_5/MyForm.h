#pragma once
#include <math.h>
#include <iostream>
#using <System.Windows.Forms.DataVisualization.dll>

namespace Fost5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Black;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(662, 447);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Моделирование движения космических тел";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(315, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(359, 465);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(315, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 503);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Fost_5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			using namespace System::Collections::Generic;
			using namespace System::Drawing::Drawing2D;
			using namespace System::Windows::Forms::DataVisualization::Charting;
			Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();

			double M = 5.972 * pow(10, 24); // kg
			double R = 6370; // km
			double G = 6.67 * pow(10, -11);
			double h = 380 * 1000; // km


			double x_0 = 6.378136 * pow(10, 6); // from keyboard
			double v_0 = 7900.0; // from keyboard

			double y = 0;
			double v_x = 0;
			double v_y = v_0;

			double X0 = x_0, Y0 = 0;

			bool isEnd = false;
			double timeStep = 10;
			double t = timeStep;
			int N = 0;

			while (N <= 600) {
				double r = sqrt(X0 * X0 + Y0 * Y0);
				v_x = v_x + timeStep * (-G * M * X0 / pow(r, 3));
				v_y = v_y + timeStep * (-G * M * Y0 / pow(r, 3));

				X0 += v_x * timeStep;
				Y0 += v_y * timeStep;

				f1->Add(X0 / x_0, Y0 / x_0);

				t += timeStep;
				N++;
			}

			int red = 000;
			int green = 000;
			int blue = 000;
			System::Drawing::Color color = Color::FromArgb(red, green, blue);

			drawGrafic(f1, color, 5, "name", "name", 5);
		}
		private: System::Void drawGrafic(System::Collections::Generic::Dictionary <double, double>^ coordinates, System::Drawing::Color color, int width, System::String^ name, System::String^ legentText, double max) {

			System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series(name));
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

			this->chart1->ChartAreas["ChartArea1"]->AxisY->Interval = max / 10;
			this->chart1->ChartAreas["ChartArea1"]->AxisY2->Minimum = 0;
			this->chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = -max;
			this->chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = max;
			this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = max / 10;
			this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = -max;
			this->chart1->ChartAreas["ChartArea1"]->AxisX2->Minimum = -max;
			this->chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = max;
			this->chart1->ChartAreas["ChartArea1"]->Position->Width = 100;
			this->chart1->ChartAreas["ChartArea1"]->Position->Height = 100;

			this->chart1->Location = System::Drawing::Point(0, 0);
			series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart1->Series->Add(series);
			this->chart1->Series[name]->Points->DataBindXY(coordinates->Keys, coordinates->Values);
			this->chart1->Series[name]->Color = color;
			this->chart1->Series[name]->BorderWidth = 3;
			}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->chart1->Series->Clear();
		}
};
}
