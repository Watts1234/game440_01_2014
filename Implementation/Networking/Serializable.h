#ifndef SERIALIZATION_H
#define SERIALIZATION_H

class Serializable
{
public:
	//deconstructor
	virtual ~Serializable();

	/// <summary> take data and serialize it to binary
	///	<para>char* data: pointer to a block of pre-allocated memory to store binary data in</para>
	/// <return>returns the length of the data that is written</return>
	/// </summary>
	virtual int Serialize(char* data);
};

#endif