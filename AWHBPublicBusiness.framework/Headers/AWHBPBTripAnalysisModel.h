//
//  AWHBPBTripAnalysisModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/5/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTripAnalysisModel : NSObject

@property(nonatomic,assign)CGFloat avgSpeed;
@property(nonatomic,copy)NSString *desc;
@property(nonatomic,copy)NSString *eaddr;
@property(nonatomic,copy)NSString *elat;
@property(nonatomic,copy)NSString *elng;
@property(nonatomic,assign)CGFloat emile;
@property(nonatomic,copy)NSString *etime;
@property(nonatomic,assign)CGFloat maxSpeed;
@property(nonatomic,assign)CGFloat mile;
@property(nonatomic,copy)NSString *saddr;
@property(nonatomic,copy)NSString *slng;
@property(nonatomic,copy)NSString *stime;
@property(nonatomic,assign)CGFloat smile;
-(id)initWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
