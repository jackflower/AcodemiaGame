////////////////////////////////////////////////////////////
//
// Acodemia Copyright (C) Jacek Kwiatek
// e-mail: jackflower (at) poczta.onet.pl
// acodemia.pl
//
// To oprogramowanie dostarczane jest w postaci takiej,
// w jakiej jest, bez wyraźnych ani domniemanych gwarancji.
//
// W żadnym wypadku Autor nie ponosi odpowiedzialności
// za jakiekolwiek szkody powstałe w wyniku korzystania
// z tego oprogramowania.Zastrzega
//
// Zezwala się na korzystanie z tego oprogramowania
// w dowolnym celu, także komercyjnym. Można je zmienić
// i swobodnie rozpowszechniać.
//
// Zastrzega się następujące ograniczenia:
//
// 1. Jeśli używasz tego oprogramowania w swoich
//    produktach, potwierdzenie pochodzenia tego
//    oprogramowania w dokumentacji produktu,
//    byłoby docenione, ale nie jest wymagane.
//
////////////////////////////////////////////////////////////

#ifndef H_TOWER_ACODEMIA
#define H_TOWER_ACODEMIA

#include "../physical/Physical.h"
using namespace acodemia::physical;

namespace acodemia
{
	namespace tower
	{
		///
		///Klasa reprezentuje wieżę - atak/obrona
		///
		class Tower:public Physical
		{

		public:

			///
			///Konstruktor domyślny
			///
			Tower();

			///
			///Konstruktor kopiujący
			///
			///@param copy - stała referencja na obiekt klasy Tower
			///
			Tower(const Tower & copy);

			///
			///Konstruktor przenoszący
			///
			///@param other = referencja do r-wartości
			///
			Tower(Physical && Tower);

			///
			///Destruktor wirtualny
			///
			virtual ~Tower();

		protected:
		private:

		};
	}//namespace physical
}// namespace acodemia
#endif//H_TOWER_ACODEMIA
