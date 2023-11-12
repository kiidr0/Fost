#pragma once
#include <cmath>

namespace Fost2 {

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






	private: System::Windows::Forms::GroupBox^ groupBoxIn;
	private: System::Windows::Forms::GroupBox^ groupBoxOut2;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxK;
	private: System::Windows::Forms::TextBox^ textBoxDe;

	private: System::Windows::Forms::TextBox^ textBoxM;
	private: System::Windows::Forms::TextBox^ textBoxV;




	private: System::Windows::Forms::Label^ labelK;
	private: System::Windows::Forms::Label^ labelDe;



	private: System::Windows::Forms::Label^ labelM;

	private: System::Windows::Forms::Label^ labelV;
	private: System::Windows::Forms::TextBox^ textBoxSSRe;

	private: System::Windows::Forms::TextBox^ textBoxTSRe;





	private: System::Windows::Forms::TextBox^ textBoxTRe;
	private: System::Windows::Forms::Label^ labelSSRE;


	private: System::Windows::Forms::Label^ labelTSRe;

	private: System::Windows::Forms::Label^ labelSRe;

	private: System::Windows::Forms::Label^ labelTRe;
	private: System::Windows::Forms::GroupBox^ groupBoxOut3;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::GroupBox^ groupBoxOut1;



	private: System::Windows::Forms::Label^ labelS;

	private: System::Windows::Forms::Label^ labelT;
	private: System::Windows::Forms::TextBox^ textBoxSRe;
	private: System::Windows::Forms::TextBox^ textBoxS;
	private: System::Windows::Forms::TextBox^ textBoxT;



	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	protected:



	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


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
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBoxIn = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxK = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->textBoxV = (gcnew System::Windows::Forms::TextBox());
			this->labelK = (gcnew System::Windows::Forms::Label());
			this->labelDe = (gcnew System::Windows::Forms::Label());
			this->labelM = (gcnew System::Windows::Forms::Label());
			this->labelV = (gcnew System::Windows::Forms::Label());
			this->groupBoxOut2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSRe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTRe = (gcnew System::Windows::Forms::TextBox());
			this->labelSRe = (gcnew System::Windows::Forms::Label());
			this->labelTRe = (gcnew System::Windows::Forms::Label());
			this->textBoxSSRe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTSRe = (gcnew System::Windows::Forms::TextBox());
			this->labelSSRE = (gcnew System::Windows::Forms::Label());
			this->labelTSRe = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBoxOut3 = (gcnew System::Windows::Forms::GroupBox());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBoxOut1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxS = (gcnew System::Windows::Forms::TextBox());
			this->labelS = (gcnew System::Windows::Forms::Label());
			this->labelT = (gcnew System::Windows::Forms::Label());
			this->groupBoxIn->SuspendLayout();
			this->groupBoxOut2->SuspendLayout();
			this->groupBoxOut3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->groupBoxOut1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxIn
			// 
			this->groupBoxIn->Controls->Add(this->textBoxK);
			this->groupBoxIn->Controls->Add(this->textBoxDe);
			this->groupBoxIn->Controls->Add(this->textBoxM);
			this->groupBoxIn->Controls->Add(this->textBoxV);
			this->groupBoxIn->Controls->Add(this->labelK);
			this->groupBoxIn->Controls->Add(this->labelDe);
			this->groupBoxIn->Controls->Add(this->labelM);
			this->groupBoxIn->Controls->Add(this->labelV);
			this->groupBoxIn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxIn->Location = System::Drawing::Point(800, 12);
			this->groupBoxIn->Name = L"groupBoxIn";
			this->groupBoxIn->Size = System::Drawing::Size(369, 225);
			this->groupBoxIn->TabIndex = 6;
			this->groupBoxIn->TabStop = false;
			this->groupBoxIn->Text = L"Входные данные";
			// 
			// textBoxK
			// 
			this->textBoxK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxK->Location = System::Drawing::Point(147, 180);
			this->textBoxK->Name = L"textBoxK";
			this->textBoxK->Size = System::Drawing::Size(215, 26);
			this->textBoxK->TabIndex = 7;
			// 
			// textBoxDe
			// 
			this->textBoxDe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDe->Location = System::Drawing::Point(147, 130);
			this->textBoxDe->Name = L"textBoxDe";
			this->textBoxDe->Size = System::Drawing::Size(215, 26);
			this->textBoxDe->TabIndex = 6;
			// 
			// textBoxM
			// 
			this->textBoxM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxM->Location = System::Drawing::Point(147, 80);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(215, 26);
			this->textBoxM->TabIndex = 5;
			// 
			// textBoxV
			// 
			this->textBoxV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV->Location = System::Drawing::Point(147, 30);
			this->textBoxV->Name = L"textBoxV";
			this->textBoxV->Size = System::Drawing::Size(215, 26);
			this->textBoxV->TabIndex = 4;
			// 
			// labelK
			// 
			this->labelK->AutoSize = true;
			this->labelK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelK->Location = System::Drawing::Point(6, 183);
			this->labelK->Name = L"labelK";
			this->labelK->Size = System::Drawing::Size(114, 19);
			this->labelK->TabIndex = 3;
			this->labelK->Text = L"k, коэффициент";
			// 
			// labelDe
			// 
			this->labelDe->AutoSize = true;
			this->labelDe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDe->Location = System::Drawing::Point(6, 133);
			this->labelDe->Name = L"labelDe";
			this->labelDe->Size = System::Drawing::Size(103, 19);
			this->labelDe->TabIndex = 2;
			this->labelDe->Text = L"Угол, градусы";
			// 
			// labelM
			// 
			this->labelM->AutoSize = true;
			this->labelM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelM->Location = System::Drawing::Point(6, 83);
			this->labelM->Name = L"labelM";
			this->labelM->Size = System::Drawing::Size(72, 19);
			this->labelM->TabIndex = 1;
			this->labelM->Text = L"Масса, кг";
			// 
			// labelV
			// 
			this->labelV->AutoSize = true;
			this->labelV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelV->Location = System::Drawing::Point(6, 33);
			this->labelV->Name = L"labelV";
			this->labelV->Size = System::Drawing::Size(100, 19);
			this->labelV->TabIndex = 0;
			this->labelV->Text = L"Скорость, м/с";
			// 
			// groupBoxOut2
			// 
			this->groupBoxOut2->Controls->Add(this->textBoxSRe);
			this->groupBoxOut2->Controls->Add(this->textBoxTRe);
			this->groupBoxOut2->Controls->Add(this->labelSRe);
			this->groupBoxOut2->Controls->Add(this->labelTRe);
			this->groupBoxOut2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxOut2->Location = System::Drawing::Point(800, 421);
			this->groupBoxOut2->Name = L"groupBoxOut2";
			this->groupBoxOut2->Size = System::Drawing::Size(369, 125);
			this->groupBoxOut2->TabIndex = 7;
			this->groupBoxOut2->TabStop = false;
			this->groupBoxOut2->Text = L"Выходные данные (С сопротивлением)";
			// 
			// textBoxSRe
			// 
			this->textBoxSRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSRe->Location = System::Drawing::Point(147, 80);
			this->textBoxSRe->Name = L"textBoxSRe";
			this->textBoxSRe->Size = System::Drawing::Size(215, 26);
			this->textBoxSRe->TabIndex = 8;
			// 
			// textBoxTRe
			// 
			this->textBoxTRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTRe->Location = System::Drawing::Point(147, 30);
			this->textBoxTRe->Name = L"textBoxTRe";
			this->textBoxTRe->Size = System::Drawing::Size(215, 26);
			this->textBoxTRe->TabIndex = 4;
			// 
			// labelSRe
			// 
			this->labelSRe->AutoSize = true;
			this->labelSRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSRe->Location = System::Drawing::Point(6, 86);
			this->labelSRe->Name = L"labelSRe";
			this->labelSRe->Size = System::Drawing::Size(127, 16);
			this->labelSRe->TabIndex = 1;
			this->labelSRe->Text = L"Дальность полета, м";
			// 
			// labelTRe
			// 
			this->labelTRe->AutoSize = true;
			this->labelTRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTRe->Location = System::Drawing::Point(6, 33);
			this->labelTRe->Name = L"labelTRe";
			this->labelTRe->Size = System::Drawing::Size(116, 19);
			this->labelTRe->TabIndex = 0;
			this->labelTRe->Text = L"Время полета, с";
			// 
			// textBoxSSRe
			// 
			this->textBoxSSRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSSRe->Location = System::Drawing::Point(147, 80);
			this->textBoxSSRe->Name = L"textBoxSSRe";
			this->textBoxSSRe->Size = System::Drawing::Size(215, 26);
			this->textBoxSSRe->TabIndex = 7;
			// 
			// textBoxTSRe
			// 
			this->textBoxTSRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTSRe->Location = System::Drawing::Point(147, 30);
			this->textBoxTSRe->Name = L"textBoxTSRe";
			this->textBoxTSRe->Size = System::Drawing::Size(215, 26);
			this->textBoxTSRe->TabIndex = 6;
			// 
			// labelSSRE
			// 
			this->labelSSRE->AutoSize = true;
			this->labelSSRE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSSRE->Location = System::Drawing::Point(6, 86);
			this->labelSSRE->Name = L"labelSSRE";
			this->labelSSRE->Size = System::Drawing::Size(127, 16);
			this->labelSSRE->TabIndex = 3;
			this->labelSSRE->Text = L"Дальность полета, м";
			// 
			// labelTSRe
			// 
			this->labelTSRe->AutoSize = true;
			this->labelTSRe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTSRe->Location = System::Drawing::Point(6, 33);
			this->labelTSRe->Name = L"labelTSRe";
			this->labelTSRe->Size = System::Drawing::Size(116, 19);
			this->labelTSRe->TabIndex = 2;
			this->labelTSRe->Text = L"Время полета, с";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(800, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(368, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBoxOut3
			// 
			this->groupBoxOut3->Controls->Add(this->textBoxTSRe);
			this->groupBoxOut3->Controls->Add(this->textBoxSSRe);
			this->groupBoxOut3->Controls->Add(this->labelTSRe);
			this->groupBoxOut3->Controls->Add(this->labelSSRE);
			this->groupBoxOut3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxOut3->Location = System::Drawing::Point(800, 552);
			this->groupBoxOut3->Name = L"groupBoxOut3";
			this->groupBoxOut3->Size = System::Drawing::Size(369, 125);
			this->groupBoxOut3->TabIndex = 10;
			this->groupBoxOut3->TabStop = false;
			this->groupBoxOut3->Text = L"Выходные данные (С сильным сопротивлением)";
			// 
			// chart
			// 
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX2->Minimum = 0;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->AxisY2->Minimum = 0;
			chartArea1->BackColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			legend1->Title = L"Цвета графиков:";
			legend1->TitleAlignment = System::Drawing::StringAlignment::Near;
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(12, 12);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"Без сопротивления";
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::OliveDrab;
			series2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"С сопротивлением";
			series2->Name = L"Series2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"С сильным сопротивлением";
			series3->Name = L"Series3";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Size = System::Drawing::Size(782, 665);
			this->chart->TabIndex = 11;
			this->chart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Tittle1";
			title1->Text = L"Движение тела в поле тяжести с учётом сопротивления/сильного сопротивления воздух"
				L"а";
			this->chart->Titles->Add(title1);
			// 
			// groupBoxOut1
			// 
			this->groupBoxOut1->Controls->Add(this->textBoxT);
			this->groupBoxOut1->Controls->Add(this->textBoxS);
			this->groupBoxOut1->Controls->Add(this->labelS);
			this->groupBoxOut1->Controls->Add(this->labelT);
			this->groupBoxOut1->Location = System::Drawing::Point(800, 290);
			this->groupBoxOut1->Name = L"groupBoxOut1";
			this->groupBoxOut1->Size = System::Drawing::Size(369, 125);
			this->groupBoxOut1->TabIndex = 12;
			this->groupBoxOut1->TabStop = false;
			this->groupBoxOut1->Text = L"Выходные данные (Без сопротивления)";
			// 
			// textBoxT
			// 
			this->textBoxT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxT->Location = System::Drawing::Point(147, 30);
			this->textBoxT->Name = L"textBoxT";
			this->textBoxT->Size = System::Drawing::Size(215, 26);
			this->textBoxT->TabIndex = 6;
			// 
			// textBoxS
			// 
			this->textBoxS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS->Location = System::Drawing::Point(147, 80);
			this->textBoxS->Name = L"textBoxS";
			this->textBoxS->Size = System::Drawing::Size(215, 26);
			this->textBoxS->TabIndex = 5;
			// 
			// labelS
			// 
			this->labelS->AutoSize = true;
			this->labelS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS->Location = System::Drawing::Point(7, 86);
			this->labelS->Name = L"labelS";
			this->labelS->Size = System::Drawing::Size(127, 16);
			this->labelS->TabIndex = 1;
			this->labelS->Text = L"Дальность полета, м";
			// 
			// labelT
			// 
			this->labelT->AutoSize = true;
			this->labelT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelT->Location = System::Drawing::Point(6, 33);
			this->labelT->Name = L"labelT";
			this->labelT->Size = System::Drawing::Size(115, 19);
			this->labelT->TabIndex = 0;
			this->labelT->Text = L"Время палета, с";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1175, 685);
			this->Controls->Add(this->groupBoxOut1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->groupBoxOut3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBoxOut2);
			this->Controls->Add(this->groupBoxIn);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fost_2";
			this->groupBoxIn->ResumeLayout(false);
			this->groupBoxIn->PerformLayout();
			this->groupBoxOut2->ResumeLayout(false);
			this->groupBoxOut2->PerformLayout();
			this->groupBoxOut3->ResumeLayout(false);
			this->groupBoxOut3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->groupBoxOut1->ResumeLayout(false);
			this->groupBoxOut1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		const double dt = 0.001;//шаг по времени
		const double g = 9.8;
		const double PI = 3.1415926535;

		double x, y, t;

		double xt(double x, double v0x) {
			return (x + v0x * dt);
		}

		double yt(double y, double v0y) {
			return (y + v0y * dt);
		}

		double vxNext(double v0x, double k, double m, double v0y) {
			return (v0x - k * dt / m * v0x * sqrt(v0x * v0x + v0y * v0y));
		}

		double vyNext(double v0x, double k, double m, double v0y) {
			return (v0y - dt * (g + k / m * v0y * sqrt(v0x * v0x + v0y * v0y)));
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart->Series["Series1"]->Points->Clear();
		chart->Series["Series2"]->Points->Clear();
		chart->Series["Series3"]->Points->Clear();
		double v = Convert::ToDouble(textBoxV->Text);
		double m = Convert::ToDouble(textBoxM->Text);
		double degree = Convert::ToDouble(textBoxDe->Text);
		double k = Convert::ToDouble(textBoxK->Text);

		x = 0, y = 0, t = 0;

		double v0x = v * cos(degree * PI / 180);
		double v0y = v * sin(degree * PI / 180);

		do {
			x = v0x * t;
			y = (v0y * t) - (g * t * t / 2);
			chart->Series["Series1"]->Points->AddXY(x, y);
			t += dt;
		} while (y >= 0);
		textBoxT->Text = Convert::ToString(t);
		textBoxS->Text = Convert::ToString(x);

		x = 0, y = 0, t = 0;

		do {
			x = (v0x * m / k) * (1 - exp(-1 * k * t / m));
			y = (m / k) * (((v0y + (m * g / k)) * (1 - exp(-1 * k * t / m))) - (g * t));
			chart->Series["Series2"]->Points->AddXY(x, y);
			t += dt;
		} while (y >= 0);
		textBoxTRe->Text = Convert::ToString(t);
		textBoxSRe->Text = Convert::ToString(x);

		x = 0, y = 0, t = 0;

		do {
			x = xt(x, v0x);
			y = yt(y, v0y);
			chart->Series["Series3"]->Points->AddXY(x, y);
			t += dt;
			v0x = vxNext(v0x, k, m, v0y);
			v0y = vyNext(v0x, k, m, v0y);
		} while (y >= 0);
		textBoxTSRe->Text = Convert::ToString(t);
		textBoxSSRe->Text = Convert::ToString(x);
}
};
}
