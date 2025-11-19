using System;

namespace PracticalTaskConsoleApp.Styczen2023_01_2
{
    internal class Note
    {
        private static int noteCount = 0;
        private int noteNumber;

        protected string noteTitle;
        protected string noteContent;

        public Note(string title, string content)
        {
            noteCount++;
            noteNumber = noteCount;

            noteTitle = title;
            noteContent = content;
        }

        public void View()
        {
            Console.WriteLine("Tytuł: " + noteTitle);
            Console.WriteLine("Treść: " + noteContent);
            Console.WriteLine();
        }

        public void ShowInfo()
        {
            Console.WriteLine($"Ilość notatek: {noteCount}; ID: {noteNumber}; Tytuł: {noteTitle}; Treść: {noteContent}");
            Console.WriteLine();
        }
    }
}