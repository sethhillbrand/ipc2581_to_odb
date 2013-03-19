#ifndef __DICTIONARYSTANDARDHANDLER_H__
#define __DICTIONARYSTANDARDHANDLER_H__

#include <QtCore>
#include "handler.h"
#include "standardprimitive.h"
#include "utils.h"

class DictionaryStandardHandler : public Handler
{
public:
  virtual void run(QXmlStreamReader& xml, Odb& odb);

private:
  UnitsType m_units;
  QHash<QString, StandardPrimitive*> m_entryStandards; // (id,EntryStandard)
};

#endif
