/**
 * You can edit, run, and share this code. 
 * play.kotlinlang.org 
 */

fun main(args: Array<String>) {
    val charactername: String = "kama"
    var characterage: Int = 20
    val charactername2 = "sutra"
    var character2 = 20
    //this is the code for lock
    var password: String = "Suhaan"
    var Whatisthepass: String = "fuck"
    var pass: String = "fuck"
    
    if(Whatisthepass.equals(password) || Whatisthepass.equals(pass))
    {
        println("you know what you got it right please enter")
    }
    else
    {
        println("you are wrong, please fuck off")
    }
    //now we will understand when function its like the switch case
    var day : String = "monday"
    
    when(day)
    {
        "monday" -> {println("oh ehh a")}
         "mondy" -> {println("oh ehh a")}
          "mody" -> {println("oh ehh a")}
           "moy" -> {println("oh ehh a")}
           else -> {println("fuc")}
           
    }
    for(item in 1..100)
    {
        println("iok")
    }
    for(i in 1..34 step 3)
    {
        println("god")
        println(i)
    }
    for(i in 45 downTo 4 step 4)
    {
        println(i)
    }
    
    
}
