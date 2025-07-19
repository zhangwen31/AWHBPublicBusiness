//
//  AWHBPBNSENUM.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/27.
//

#import <Foundation/Foundation.h>

//调整对应功能界面类型
typedef NS_ENUM(NSInteger, AWHBPBDetailsLineType) {
    AWHBPBDetailsLineTypeCenter                     = 0,
    AWHBPBDetailsLineTypeTop                        = 1,
    AWHBPBDetailsLineTypeBottom                     = 2,
    AWHBPBDetailsLineTypeSingle                     = 3,
};

//播放类型选择
typedef NS_ENUM(NSInteger) {
    AWHBPBHistoryVideoPlayTypeNormal             = 0, //正常
    AWHBPBHistoryVideoPlayTypePause              = 1, //暂停
    AWHBPBHistoryVideoPlayTypeFastForward        = 2,  //快进
    AWHBPBHistoryVideoPlayTypeSlowForward        = 3,  //慢进
    AWHBPBHistoryVideoPlayTypeKeyframe           = 4,  //关键帧
}AWHBPBHistoryVideoPlayType;
//倍数选择
typedef NS_ENUM(NSInteger) {
    AWHBPBHistoryMultiplePlayTypeNormal              = 1, //正常 1倍
    AWHBPBHistoryMultiplePlayTypeTwo                 = 2,  //2倍
    AWHBPBHistoryMultiplePlayTypeFour                = 3,  //4倍
    AWHBPBHistoryMultiplePlayTypeEight               = 4,  //8倍
    AWHBPBHistoryMultiplePlayTypeSixteen             = 5,  //16倍
}AWHBPBHistoryMultiplePlayType;
