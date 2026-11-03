#include<cctype>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
class Xe{
	private:
		int VehicleID;
		string VehicleType;
		int entryTime;
		int packingDuration;
		double packingFee;
		bool isOccupied;      
	public:
		Xe(){
			VehicleID =0;
			VehicleType="";
			entryTime=0;
			packingDuration=0;
			packingFee=0;
			isOccupied=false;
		}
		Xe(int VehicleID,string VehicleType,int entryTime,int packingDuration,double packingFee,bool isOccupied){
			VehicleID =VehicleID;
			VehicleType=VehicleType;
			entryTime=entryTime;
			packingDuration=packingDuration;
			packingFee=packingFee;
			isOccupied=isOccupied;
		}
		int getMaXe()const{
			return VehicleID;
		}	
		string getLoaiXe()const{
			return  VehicleType;
		} 
		int getGioVao()const{
			return entryTime;
		}
		int getThoiGianDo() const{
			return packingDuration;
		}
		double getPhiDoXe() const{
			return packingFee;
		}
		bool GetTrangThaiXe()const{
			return isOccupied;
		}
		void setMaXe(int ma){
			VehicleID =ma;
		}
		void setLoaiXe(string loai){
			if(laLoaiXeHopLe(loai)){
				VehicleType= loai;
			}
			VehicleType=loai;
		}
		void setGioVao(int time){
			if(time>0 && time <=23){
				entryTime=time;
			}
		}
		void setGioDo(int h){
			if(h>0 && h<24 && entryTime + h<=24){
				packingDuration = h;
			}
		}
		void setPhiDo(double phi){
			if(phi>0){
				packingFee = phi;
			}
		}
		void setTrangThai(bool a){
			isOccupied=a;
		}
		static string chuanHoaLoaiXe(const string& loai){
			transform(loai.begin(),loai.end(),loai.begin(),:: toLower );
		} 
		static bool laLoaiXeHopLe(const string& loai){
			
		}
};
