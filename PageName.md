# Introduction #

Add your content here.


# Details #

Рассмотрим, какие функции требуются.

Во-первых, требуется передать кол-во классов(школьных) и названия их.
Наверное, стоит передать их в виде структуры int и указатель на список строчек(всмысле подряд записанные названия). Чего-нибудь вида:
FormList take\_form\_list(){}, где FormList - такая структура.

Также наверное понадобятся список учителей и предметов и кабинетов. (То, какому учителю - какие предметы, врядли понадобится)

TeacherList take\_teacher\_list(){}
SubjectList take\_subject\_list(){}
RoomList take\_room\_list(){}

+

int number\_of\_lessons(){}
int number\_of\_learning\_days(){}
int max\_number\_of\_groups(){}



Во-вторых, требуется заполнить с самого начала клетки, и вообще иметь возможность окнам изменять где-то (на оперативной памяти) хранящиеся данные. Поэтому надо, чтобы окна могли узнать где, что лежит.
Поэтому требуется что-то вида:


int**number\_of\_groups(int form, int lesson\_day, int lesson\_time){}  , где int form - порядковый номер класса
int** teacher(int form, int lesson\_day, int lesson\_time, int group){}  , где teacher - порядковый номер учителя
int**subject(int form, int lesson\_day, int lesson\_time, int group){}     -||-
int** room(int form, int lesson\_day, int lesson\_time, int group){}     -||-

Возможно, если знать как именно расположенны эти ячейки в памяти, то будет быстрее дать мне один указатель и пусть я сам высчитываю от него, где остальные


В-третьих, надо уметь получать список доступных кабинетов/учителей/предметов (доступных предметов с учётом учителя). Тут есть некоторая сложность. Этот список я хочу использовать как параметр у функции, которая даёт варианты для заполнения ( пример вызова функции:
" this->textBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(6) {L"vfdavds", L"dwfEwraf", L"cedwftgwTE", L"VDEAGHBDXGCVB", L"\\FSZDVXBF", L"fdgbxvc "}); "). А это какой-то очень хитрый тип. Возможно, когда мы в нём разберёмся, его можно будет использовать и в первых функциях.

See also [AppModelAPI](AppModelAPI.md) on Wiki