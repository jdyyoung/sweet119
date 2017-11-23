#define DELAYTIME 20000
#define MAX_COUNT 10

typedef enum{
    Success,
    Timeout,
    Data_err
}R_Status;

R_Status serial_trans(const char* str)
{
    unsigned char buf[512];
    unsigned char cnt=0;
    //初始化串口
    //  //定时器初始化（用延时？？）
    //      while(1)
    //          {
    //                  if(cnt == MAX_COUNT)
    //                          {
    //                                      return Timeout;
    //                                              }
    //                                                              
    //                                                                      // 串口发送
    //
    //                                                                              //延时
    //                                                                                      
    //                                                                                              //串口接收
    //                                                                                                      if(接收字节==0)
    //                                                                                                              {
    //                                                                                                                          cnt++;
    //                                                                                                                                      continue;
    //                                                                                                                                              }
    //                                                                                                                                                      
    //                                                                                                                                                              //对比发送数据和接收数据是否一样
    //                                                                                                                                                                      if(strcmp())
    //                                                                                                                                                                              {
    //                                                                                                                                                                                          
    //                                                                                                                                                                                                  }
    //                                                                                                                                                                                                      }
    //
    //
    //                                                                                                                                                                                                      }
