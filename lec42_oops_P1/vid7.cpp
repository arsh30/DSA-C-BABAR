// 4) COPY ASSIGNMENT OPERATOR =

// Hero a(10, 'c');
// Hero b(20, 'b');

// a = b; ye likhdiya

// toh hoga
// a = 10,'c'
// b = 20,'b'

// a =b
// b jo hai a me dal do hojega

// a.health = b.health
// a.level = b.level
// a.name = b.name

// --------------------------------------------

// Destructor -> memory ko deallocate krne ke liye

// Jese hi object out of scope hote hai  toh yeh call hota hai
// or memory ko free krta hai

// Eg: main(){
//     Hero a;
// } jese hi 27 line pr aayega Object end hone wala hai
// to jo space li hogi vo free hojegi

// - Destructor class create hote hi apne aap create hjata h
// - name same hota hai jo class ka hota hai
// - No ip parameter
// - NOTE -> Jo bhi Object statically bnate hai unke liye
// destructor apne aap call hota hai
// - destructor 1 hi baar call hota hai jab uska destructor hai

// Eg of destructor MAking
// ~Hero(){
//     cout << "DESTRUCTOR CALLED " << endl;
// }

// Jo Dynamic Object bnate h unke liye manually constructor call
//  krna pdhega
// eg : Hero *b = new Hero();
// delete b; // Manually destructor ko delete kra

// HW ->
// Const keyword ,
// isko object creation me kese use krte h
// initialisation list

// STATIC KEYWORD -----> It is a keyword that belong to class
// Not instance
/*
aisa data memeber create krta hai jo class ko belong krta hai.Yeh aisa data member create krta hai - jisme Object bnane ki
need nahi pdhti,

    eg : class Hero
{
    int level;
    int health;
    static int timeToComp;
    // iss static member ko class ke bhar access krege without
    //  making object
}

int Hero::timeToComplete = 5;
main()
{
    // initialise krege timeToComplete ko class ke bhar

    // How to initialise
    // data_Type className :: [scope reslution
    // operator]fieldName=value;

    // cout << Hero::timetoComplete << endl; Access krre h

    // Note- > jo static member bnaya hai vo Object se belong
    //  nahi krta, ye class ko belong krta hai
    // initialise krege timeToComplete ko class ke bhar

    // cout << Hero::timetoComplete << endl; - static ko aise
    // access krte h
}

*/

// ------------

// STATIC FUNCTIONS --------

// - IDR BHI OBJECT create krne ki need nahi h
// - inke pass this keyword nahi hai
// - static function sirf static member ko access kr skte h sirf
// When a variable is declared as static, space for it gets allocated for the lifetime of the program.

// eg:
// class Hero{
//     static int random(){
//         return timetocompl; // tohi sirf sahi chlega
//         // otherwise agr koivariable access krte to error deta
//     }
// }
// cout << Hero ::random() << endl; Access the static function


// ------------------ FINISH -----------------------