double atof(char *s)
{
  double val,power;
  int sign;
  for(;isspace(*s);s++);
  sign=(*s=='-')? -1:1;
  if(*s=='+' || *s=='-')
  s++;
  for(val=0.0;isdigit(*s);s++)
  val=10.0*val+(*s-'0');
  if(*s=='.')
  s++;
  for(power=1;isdigit(*s);s++)
  {
    val=10.0*val+(*s-'0');
    power*=10;
  }
  return sign*val/power;
}
