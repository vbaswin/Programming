/*
   https://stackoverflow.com/questions/2023977/difference-of-keywords-typename-and-class-in-templates
   
   There is a slight difference when using nested template so
   check this

   you need to use class when defining template template parameter

   You also must use class when explicitly instantiating a template:

   template class Foo<int>;

*/
