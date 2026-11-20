
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100308f0 <.text+0x2f8f0>:
100308f0:	55                   	push   ebp
100308f1:	8b ec                	mov    ebp,esp
100308f3:	6a ff                	push   0xffffffff
100308f5:	68 50 d6 19 10       	push   0x1019d650
100308fa:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10030900:	50                   	push   eax
10030901:	56                   	push   esi
10030902:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10030907:	33 c5                	xor    eax,ebp
10030909:	50                   	push   eax
1003090a:	8d 45 f4             	lea    eax,[ebp-0xc]
1003090d:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10030913:	8b 01                	mov    eax,DWORD PTR [ecx]
10030915:	8d 71 70             	lea    esi,[ecx+0x70]
10030918:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1003091b:	c7 44 30 90 40 db 1a 	mov    DWORD PTR [eax+esi*1-0x70],0x101adb40
10030922:	10 
10030923:	8b 46 90             	mov    eax,DWORD PTR [esi-0x70]
10030926:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10030929:	8d 41 90             	lea    eax,[ecx-0x70]
1003092c:	89 44 31 8c          	mov    DWORD PTR [ecx+esi*1-0x74],eax
10030930:	8d 4e a0             	lea    ecx,[esi-0x60]
10030933:	e8 58 f9 ff ff       	call   0x10030290
10030938:	8b 46 90             	mov    eax,DWORD PTR [esi-0x70]
1003093b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1003093e:	c7 44 30 90 b0 da 1a 	mov    DWORD PTR [eax+esi*1-0x70],0x101adab0
10030945:	10 
10030946:	8b 46 90             	mov    eax,DWORD PTR [esi-0x70]
10030949:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1003094c:	8d 41 e8             	lea    eax,[ecx-0x18]
1003094f:	89 44 31 8c          	mov    DWORD PTR [ecx+esi*1-0x74],eax
10030953:	56                   	push   esi
10030954:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1003095b:	c7 06 58 da 1a 10    	mov    DWORD PTR [esi],0x101ada58
10030961:	e8 8f 26 0f 00       	call   0x10122ff5
10030966:	83 c4 04             	add    esp,0x4
10030969:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1003096c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10030973:	59                   	pop    ecx
10030974:	5e                   	pop    esi
10030975:	8b e5                	mov    esp,ebp
10030977:	5d                   	pop    ebp
10030978:	c3                   	ret
