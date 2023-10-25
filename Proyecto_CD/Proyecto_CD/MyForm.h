#pragma once

namespace ProyectoCD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ Cargar_BTN;

	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Nombre_CD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Canciones_Totales;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre_cncn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Duracion;





















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre_CD = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Canciones_Totales = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre_cncn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Artista = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Duracion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Cargar_BTN = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(825, 602);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(817, 573);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombre_CD,
					this->Canciones_Totales, this->Nombre_cncn, this->Artista, this->Duracion
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(804, 545);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// Nombre_CD
			// 
			this->Nombre_CD->HeaderText = L"Nombre CD";
			this->Nombre_CD->MinimumWidth = 6;
			this->Nombre_CD->Name = L"Nombre_CD";
			this->Nombre_CD->Width = 175;
			// 
			// Canciones_Totales
			// 
			this->Canciones_Totales->HeaderText = L"Canciones Totales";
			this->Canciones_Totales->MinimumWidth = 6;
			this->Canciones_Totales->Name = L"Canciones_Totales";
			this->Canciones_Totales->Width = 125;
			// 
			// Nombre_cncn
			// 
			this->Nombre_cncn->HeaderText = L"Nombre";
			this->Nombre_cncn->MinimumWidth = 6;
			this->Nombre_cncn->Name = L"Nombre_cncn";
			this->Nombre_cncn->Width = 150;
			// 
			// Artista
			// 
			this->Artista->HeaderText = L"Artista";
			this->Artista->MinimumWidth = 6;
			this->Artista->Name = L"Artista";
			this->Artista->Width = 150;
			// 
			// Duracion
			// 
			this->Duracion->HeaderText = L"Duracion";
			this->Duracion->MinimumWidth = 6;
			this->Duracion->Name = L"Duracion";
			this->Duracion->Width = 150;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(7, 7);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(804, 560);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(817, 573);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Cargar_BTN
			// 
			this->Cargar_BTN->Location = System::Drawing::Point(308, 621);
			this->Cargar_BTN->Name = L"Cargar_BTN";
			this->Cargar_BTN->Size = System::Drawing::Size(169, 68);
			this->Cargar_BTN->TabIndex = 1;
			this->Cargar_BTN->Text = L"CARGAR";
			this->Cargar_BTN->UseVisualStyleBackColor = true;
			this->Cargar_BTN->Click += gcnew System::EventHandler(this, &MyForm::Cargar_BTN_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Seleccione el directorio";
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"\"rtf\"";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"\"rtf files (*.rtf)|*.rtf\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 710);
			this->Controls->Add(this->Cargar_BTN);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Cargar_BTN_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK)
		{
			String^ folderName = folderBrowserDialog1->SelectedPath;
			openFileDialog1->InitialDirectory = folderName;
			// Obtener todos los archivos de texto en la carpeta seleccionada
			array<String^>^ archivos = Directory::GetFiles(folderName, "*.txt");
			StreamReader^ sr;

			int contador = 0;

			String^ Linea = "";
			String^ archivo = "";
			for (int i = 0; i < archivos->Length; i++) {
				archivo = archivos[i];
				sr = gcnew StreamReader(archivo);
				int contador_canciones = 0;
				
				while ((Linea = sr->ReadLine()) != nullptr) {
					contador_canciones++;
				}
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[contador]->Cells[0]->Value = Path::GetFileName(archivo);
				dataGridView1->Rows[contador]->Cells[1]->Value = contador_canciones;
				contador++;
			sr->Close();
			}	
		}

	};
	public: System::Void mostrarAlbum(String^ nombreAlbum) {
		StreamReader^ sr = gcnew StreamReader(nombreAlbum);

		String^ Nombre = "";
		String^ Artista = "";
		String^ Duracion = "";
		String^ Linea = "";
		array<String^>^ separadores = { "||" };

		int contador = 0;
		while ((Linea = sr->ReadLine()) != nullptr) {

			array<String^>^ dataCancion = Linea->Split(separadores,	StringSplitOptions::None);
			dataGridView1->Rows->Add(1);
			dataGridView1->Rows[contador]->Cells[2]->Value = dataCancion[0];
			dataGridView1->Rows[contador]->Cells[3]->Value = dataCancion[1];
			dataGridView1->Rows[contador]->Cells[4]->Value = dataCancion[2];
			contador++;
		}
		sr->Close();
	}
	
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		
			String^ nombreColumna = dataGridView1->Columns[e->ColumnIndex]->Name;

			// Verificar si la celda pertenece a la columna "album"
			if (nombreColumna == "Nombre_CD") {
				// Obtener el valor de la celda (nombre del álbum)
				String^ nombreAlbum = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();

				// Ejecutar la acción específica para la columna "album"
				// Puedes agregar aquí la lógica que deseas realizar con el álbum seleccionado
				MessageBox::Show("Se hizo clic en el álbum: " + nombreAlbum, "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				mostrarAlbum(nombreAlbum);
			}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
