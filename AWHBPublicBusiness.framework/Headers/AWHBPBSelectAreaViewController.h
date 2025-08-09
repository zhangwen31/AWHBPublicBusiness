//
//  AWHBPBSelectAreaViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/23.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectAreaViewController : AWHBBBaseViewController
//行政分类ids  [chinaId...]  示例值：["3502", "350203", "350205", "350206", "350211", "350212", "350213"]
@property(nonatomic,strong) NSMutableArray *chinas;
//所属区域ids  [regionId...] 示例值：["1651"]
@property(nonatomic,strong) NSMutableArray *regions;

@property (nonatomic, copy) void (^SelectAreaBlock)(NSMutableArray *chinas, NSMutableArray *regions, NSString *selectNameStr, NSArray *areaArr);

@end

NS_ASSUME_NONNULL_END
