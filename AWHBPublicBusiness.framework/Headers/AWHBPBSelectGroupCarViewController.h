//
//  AWHBPBSelectGroupCarViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN
//代理传值地图车辆id
@protocol AWHBPBTeamIdDelegate <NSObject>
- (void)returnTeamId:(NSString *)teamId andTeamName:(NSString *)teamName carNum:(NSInteger)carNum;
@end

//代理传值地图车辆id
@protocol AWHBPBCarIdTabOpinionDelegate <NSObject>
- (void)returnCarIdTabOpinion:(NSString *)tabOpinion
               andSelectCarId:(nonnull NSString *)carId
             andAllCarIdArray:(NSMutableArray *)allCarIdArr
                    andAllCar:(nonnull NSMutableArray *)carArr
                  andTeamName:(NSString *)teamName
                       carNum:(NSInteger)carNum;

/// 多车选择
/// - Parameters:
///   - tabOpinion: 车辆id 字符串
///   - selectCarArray:选择的车辆model数组
///   - selectCarIdArray: 选择车辆id数组
- (void)selectMultipleCarIdOpinion:(NSString *)tabOpinion
                    selectCarArray:(NSArray *)selectCarArray
                  selectCarIdArray:(NSArray *)selectCarIdArray;

@end

@interface AWHBPBSelectGroupCarViewController : AWHBBBaseViewController
@property (nonatomic, weak) id <AWHBPBTeamIdDelegate> delegate;
@property (nonatomic, weak) id <AWHBPBCarIdTabOpinionDelegate> delegate2;
/// 是否过滤无权限车队 默认不过滤 bool NO
@property (nonatomic, strong) NSNumber *isFilterNoAuth;
/// 是否可以车辆多选
@property (nonatomic, assign) BOOL isSelectMultipleCar;
/// 选中的车辆
@property (nonatomic, strong) NSArray<NSString *> *selectCarIds;

@end

NS_ASSUME_NONNULL_END
