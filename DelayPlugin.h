#ifndef __DELAYPLUGIN__
#define __DELAYPLUGIN__

#include "IPlug_include_in_plug_hdr.h"

class DelayPlugin : public IPlug
{
public:
  DelayPlugin(IPlugInstanceInfo instanceInfo);
  ~DelayPlugin();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);
  void cookVars();
  void resetDelay();
  
  
private:
  double mDelaySam = 0.;
  double mFeedback = 0.;
  double mWet = 0.;
  
  double* mpBuffer = NULL;
  int mReadIndex = 0;
  int mWriteIndex = 0;
  int mBufferSize = 0;
  
  
  
};

#endif
