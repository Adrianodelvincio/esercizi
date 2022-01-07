#ifndef fourvector_h 
#define fourvector_h
#include <math.h>
#endif
template <class T> 
class FourVector {
	public: //accesso a px py pz che sono public
		FourVector(T px, T py, T pz, T energy) : m_px(px), m_py(py) , m_pz(pz), m_e(energy) //inizializzo
			{
			//nothing to do, already initialized
			}
		T px() const {return m_px;}
		T py() const {return m_py;}
		T pz() const {return m_pz;}
		T e() const {return m_e;}
		T m() const {return sqrt(e()*e() - px()*px() - py()*py() - pz()*pz());}		
	private:
		T m_px , m_py, m_pz, m_m , m_e;
};



template <class T>
Fourvector<T>  operator+(const FourVector<T> & a, const FourVector<T1> & b){
	return FourVector<T>(a.px() + b.px(),a.py()+b.py(),a.pz()+b.pz(),a.e()+b.e();
	};



