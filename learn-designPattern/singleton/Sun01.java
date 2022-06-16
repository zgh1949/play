
// 饿汉式 JVM保证线程安全 最简单
public class Sun01{
    private static final Sun01 INSTANCE = new Sun01();

    private Sun01(){
        // 私有化构造器，防止主动new该类
    }

    public static Sun01 getInstance(){
        return INSTANCE;
    }

    public void method(){
        // do something
    }
}