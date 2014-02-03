#ifndef SERIALIZATION_H
#define SERIALIZATION_H

class Deserializable
{
public:
	//deconstructor
	virtual ~Deserializable();

	/// <summary> take binary data and deserialize it
	///	<para>char* data: pointer to binary data being deserialized</para>
	/// <para>int length: length of the information pointed to by data in bytes</para>
	/// <return>returns the length of the allocated data that is read</return>
	/// </summary>
	virtual int Deserialize(char* data, int length);
};
#endif
