
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cf940 <.text+0xce940>:
100cf940:	55                   	push   ebp
100cf941:	8b ec                	mov    ebp,esp
100cf943:	83 ec 18             	sub    esp,0x18
100cf946:	56                   	push   esi
100cf947:	8b f1                	mov    esi,ecx
100cf949:	68 64 84 1a 10       	push   0x101a8464
100cf94e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf951:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100cf957:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100cf95d:	8d 45 f4             	lea    eax,[ebp-0xc]
100cf960:	c7 45 f4 00 00 40 41 	mov    DWORD PTR [ebp-0xc],0x41400000
100cf967:	50                   	push   eax
100cf968:	8d 45 e8             	lea    eax,[ebp-0x18]
100cf96b:	c7 45 f8 00 00 40 41 	mov    DWORD PTR [ebp-0x8],0x41400000
100cf972:	50                   	push   eax
100cf973:	ff 76 04             	push   DWORD PTR [esi+0x4]
100cf976:	c7 45 fc 00 00 90 42 	mov    DWORD PTR [ebp-0x4],0x42900000
100cf97d:	c7 45 e8 00 00 40 c1 	mov    DWORD PTR [ebp-0x18],0xc1400000
100cf984:	c7 45 ec 00 00 40 c1 	mov    DWORD PTR [ebp-0x14],0xc1400000
100cf98b:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
100cf992:	e8 99 a6 04 00       	call   0x1011a030
100cf997:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf99a:	83 c4 14             	add    esp,0x14
100cf99d:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
100cf9a4:	00 00 00 
100cf9a7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf9aa:	51                   	push   ecx
100cf9ab:	8b ce                	mov    ecx,esi
100cf9ad:	c7 80 08 01 00 00 04 	mov    DWORD PTR [eax+0x108],0x4
100cf9b4:	00 00 00 
100cf9b7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf9ba:	c7 80 18 01 00 00 00 	mov    DWORD PTR [eax+0x118],0x0
100cf9c1:	00 00 00 
100cf9c4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf9c7:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x42480000
100cf9ce:	00 48 42 
100cf9d1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf9d4:	c7 80 b0 00 00 00 00 	mov    DWORD PTR [eax+0xb0],0x41000000
100cf9db:	00 00 41 
100cf9de:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100cf9e5:	8b 06                	mov    eax,DWORD PTR [esi]
100cf9e7:	74 10                	je     0x100cf9f9
100cf9e9:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
100cf9f0:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100cf9f7:	eb 0e                	jmp    0x100cfa07
100cf9f9:	c7 46 78 d0 c7 0c 10 	mov    DWORD PTR [esi+0x78],0x100cc7d0
100cfa00:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100cfa07:	ff 50 08             	call   DWORD PTR [eax+0x8]
100cfa0a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cfa0d:	c7 80 4c 01 00 00 02 	mov    DWORD PTR [eax+0x14c],0x2
100cfa14:	00 00 00 
100cfa17:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cfa1a:	5e                   	pop    esi
100cfa1b:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
100cfa22:	00 00 00 
100cfa25:	8b e5                	mov    esp,ebp
100cfa27:	5d                   	pop    ebp
100cfa28:	c2 04 00             	ret    0x4
