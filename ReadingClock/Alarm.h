class Alarm
{
  public:
    Alarm(void (*beeperCallback)(bool));
    
    void TurnOn();
    void TurnOff();
    void SetState(bool on);
    bool IsOn();
    
    void Update(long deltaMilliseconds);
    
  private:
    void UpdateCurrentState();
    
  private:
    bool _isOn;
    int _currentStateIndex;
    long _millisecondsSinceLastStateChange;
    void (*_beeperCallback)(bool);
};