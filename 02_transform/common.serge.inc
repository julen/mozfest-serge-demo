job-common
{
  db_source             DBI:SQLite:dbname=./serge.db3
  db_namespace          demo

  source_language       en

  source_dir            ./sources/en/
  output_file_path      ./localized/%LOCALE%/%FILE%

  ts_file_path          ./po/%LOCALE%/%FILE%.po
}
