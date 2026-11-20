
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015750 <.text+0x14750>:
10015750:	56                   	push   esi
10015751:	8b f1                	mov    esi,ecx
10015753:	8b 86 dc 00 00 00    	mov    eax,DWORD PTR [esi+0xdc]
10015759:	83 f8 01             	cmp    eax,0x1
1001575c:	0f 85 f5 00 00 00    	jne    0x10015857
10015762:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10015765:	c7 86 dc 00 00 00 02 	mov    DWORD PTR [esi+0xdc],0x2
1001576c:	00 00 00 
1001576f:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
10015776:	0f 84 a7 00 00 00    	je     0x10015823
1001577c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015781:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
10015787:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001578d:	51                   	push   ecx
1001578e:	68 48 54 1a 10       	push   0x101a5448
10015793:	6a 01                	push   0x1
10015795:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001579b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001579e:	83 c4 0c             	add    esp,0xc
100157a1:	8b 91 cc 01 00 00    	mov    edx,DWORD PTR [ecx+0x1cc]
100157a7:	85 d2                	test   edx,edx
100157a9:	74 40                	je     0x100157eb
100157ab:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100157b0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100157b6:	03 c2                	add    eax,edx
100157b8:	50                   	push   eax
100157b9:	68 70 54 1a 10       	push   0x101a5470
100157be:	6a 01                	push   0x1
100157c0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100157c6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100157c9:	83 c4 0c             	add    esp,0xc
100157cc:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
100157d2:	85 c9                	test   ecx,ecx
100157d4:	74 3d                	je     0x10015813
100157d6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100157db:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100157e1:	03 c1                	add    eax,ecx
100157e3:	50                   	push   eax
100157e4:	68 7c 54 1a 10       	push   0x101a547c
100157e9:	eb 1d                	jmp    0x10015808
100157eb:	8b 89 f0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1f0]
100157f1:	85 c9                	test   ecx,ecx
100157f3:	74 1e                	je     0x10015813
100157f5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100157fa:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015800:	03 c1                	add    eax,ecx
10015802:	50                   	push   eax
10015803:	68 70 54 1a 10       	push   0x101a5470
10015808:	6a 01                	push   0x1
1001580a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10015810:	83 c4 0c             	add    esp,0xc
10015813:	68 d8 53 1a 10       	push   0x101a53d8
10015818:	6a 01                	push   0x1
1001581a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10015820:	83 c4 08             	add    esp,0x8
10015823:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015826:	51                   	push   ecx
10015827:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1001582e:	6a 01                	push   0x1
10015830:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
10015836:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001583b:	56                   	push   esi
1001583c:	56                   	push   esi
1001583d:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10015843:	51                   	push   ecx
10015844:	e8 a7 c7 0e 00       	call   0x10101ff0
10015849:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001584c:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
10015852:	e9 da 00 00 00       	jmp    0x10015931
10015857:	83 f8 03             	cmp    eax,0x3
1001585a:	0f 85 f3 00 00 00    	jne    0x10015953
10015860:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10015863:	c7 86 dc 00 00 00 00 	mov    DWORD PTR [esi+0xdc],0x0
1001586a:	00 00 00 
1001586d:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
10015874:	0f 84 8b 00 00 00    	je     0x10015905
1001587a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001587f:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
10015885:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001588b:	51                   	push   ecx
1001588c:	68 84 54 1a 10       	push   0x101a5484
10015891:	6a 01                	push   0x1
10015893:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10015899:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001589c:	83 c4 0c             	add    esp,0xc
1001589f:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100158a5:	85 c9                	test   ecx,ecx
100158a7:	74 21                	je     0x100158ca
100158a9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100158ae:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100158b4:	03 c1                	add    eax,ecx
100158b6:	50                   	push   eax
100158b7:	68 70 54 1a 10       	push   0x101a5470
100158bc:	6a 01                	push   0x1
100158be:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100158c4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100158c7:	83 c4 0c             	add    esp,0xc
100158ca:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
100158d0:	85 c9                	test   ecx,ecx
100158d2:	74 1e                	je     0x100158f2
100158d4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100158d9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100158df:	03 c1                	add    eax,ecx
100158e1:	50                   	push   eax
100158e2:	68 7c 54 1a 10       	push   0x101a547c
100158e7:	6a 01                	push   0x1
100158e9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100158ef:	83 c4 0c             	add    esp,0xc
100158f2:	68 d8 53 1a 10       	push   0x101a53d8
100158f7:	6a 01                	push   0x1
100158f9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100158ff:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10015902:	83 c4 08             	add    esp,0x8
10015905:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001590a:	51                   	push   ecx
1001590b:	8b 89 cc 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1cc]
10015911:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015918:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001591e:	6a 00                	push   0x0
10015920:	56                   	push   esi
10015921:	56                   	push   esi
10015922:	51                   	push   ecx
10015923:	e8 c8 c6 0e 00       	call   0x10101ff0
10015928:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001592b:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
10015931:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015936:	83 c4 10             	add    esp,0x10
10015939:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001593f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015946:	6a 03                	push   0x3
10015948:	56                   	push   esi
10015949:	56                   	push   esi
1001594a:	51                   	push   ecx
1001594b:	e8 a0 c6 0e 00       	call   0x10101ff0
10015950:	83 c4 14             	add    esp,0x14
10015953:	5e                   	pop    esi
10015954:	c3                   	ret
