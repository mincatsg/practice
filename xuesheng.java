//1.  设计一个学生类

class student{
    public String name;
    public int age;
    public String xuewei;
    public String getname(){
        return name;
    }
    public int getage(){
        return age;
    }
    public String getxuewei(){
        return xuewei;
    }
}
class benkesheng extends student{
    public String zhuanye;
    public String getname(){
        return name;
    }
    public int getage(){
        return age;
    }
    public String getxuewei(){
        return xuewei;
    }
    public String getzhuanye(){
        return zhuanye;
    }

}
class yanjiusheng extends benkesheng{
    public String zanjiu;
    public String getname(){
        return name;
    }
    public int getage(){
        return age;
    }
    public String getxuewei(){
        return xuewei;
    }
    public String getzanjiufangxiang(){
        return zanjiu;
    }
}
public class xuesheng{
    public static void main(String args[]){
        student student1=new student();
        benkesheng benkesheng1=new benkesheng();
        yanjiusheng yanjiusheng1=new yanjiusheng();
        student1.name="yym";
        student1.age=18;
        student1.xuewei="daxuesheng";
        benkesheng1.name="yym";
        System.out.println("name of student1:"+student1.getname());
        System.out.println("name of benkesheng1:"+benkesheng1.getname());
    }
}
