
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa8c0 <.text+0xf98c0>:
100fa8c0:	56                   	push   esi
100fa8c1:	8b f1                	mov    esi,ecx
100fa8c3:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
100fa8c9:	e8 c2 ce f1 ff       	call   0x10017790
100fa8ce:	50                   	push   eax
100fa8cf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa8d4:	8b ce                	mov    ecx,esi
100fa8d6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa8dc:	03 86 74 03 00 00    	add    eax,DWORD PTR [esi+0x374]
100fa8e2:	50                   	push   eax
100fa8e3:	e8 d8 02 00 00       	call   0x100fabc0
100fa8e8:	50                   	push   eax
100fa8e9:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100fa8ef:	e8 4c ce f1 ff       	call   0x10017740
100fa8f4:	8b ce                	mov    ecx,esi
100fa8f6:	85 c0                	test   eax,eax
100fa8f8:	74 3a                	je     0x100fa934
100fa8fa:	8b 06                	mov    eax,DWORD PTR [esi]
100fa8fc:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
100fa902:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa907:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100fa90d:	8b 86 74 03 00 00    	mov    eax,DWORD PTR [esi+0x374]
100fa913:	03 c1                	add    eax,ecx
100fa915:	50                   	push   eax
100fa916:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa919:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
100fa91f:	03 c1                	add    eax,ecx
100fa921:	50                   	push   eax
100fa922:	68 e0 de 1d 10       	push   0x101ddee0
100fa927:	6a 02                	push   0x2
100fa929:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fa92f:	83 c4 10             	add    esp,0x10
100fa932:	5e                   	pop    esi
100fa933:	c3                   	ret
100fa934:	e8 77 fb ff ff       	call   0x100fa4b0
100fa939:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa93e:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100fa944:	8b 86 74 03 00 00    	mov    eax,DWORD PTR [esi+0x374]
100fa94a:	03 c1                	add    eax,ecx
100fa94c:	50                   	push   eax
100fa94d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa950:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
100fa956:	03 c1                	add    eax,ecx
100fa958:	50                   	push   eax
100fa959:	68 00 df 1d 10       	push   0x101ddf00
100fa95e:	6a 02                	push   0x2
100fa960:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fa966:	8b 06                	mov    eax,DWORD PTR [esi]
100fa968:	83 c4 0c             	add    esp,0xc
100fa96b:	8b ce                	mov    ecx,esi
100fa96d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100fa974:	ff 50 08             	call   DWORD PTR [eax+0x8]
100fa977:	5e                   	pop    esi
100fa978:	c3                   	ret
