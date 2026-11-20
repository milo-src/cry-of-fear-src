
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101910 <.text+0x100910>:
10101910:	56                   	push   esi
10101911:	8b f1                	mov    esi,ecx
10101913:	e8 38 0b fc ff       	call   0x100c2450
10101918:	f6 86 04 03 00 00 08 	test   BYTE PTR [esi+0x304],0x8
1010191f:	74 59                	je     0x1010197a
10101921:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10101927:	e8 54 5e f1 ff       	call   0x10017780
1010192c:	85 c0                	test   eax,eax
1010192e:	75 4a                	jne    0x1010197a
10101930:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10101933:	83 b8 d4 01 00 00 00 	cmp    DWORD PTR [eax+0x1d4],0x0
1010193a:	74 09                	je     0x10101945
1010193c:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
10101943:	74 35                	je     0x1010197a
10101945:	6a 04                	push   0x4
10101947:	68 00 04 00 00       	push   0x400
1010194c:	8b ce                	mov    ecx,esi
1010194e:	e8 3d fc ff ff       	call   0x10101590
10101953:	85 c0                	test   eax,eax
10101955:	74 23                	je     0x1010197a
10101957:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010195d:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10101960:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
10101966:	03 0a                	add    ecx,DWORD PTR [edx]
10101968:	51                   	push   ecx
10101969:	50                   	push   eax
1010196a:	68 88 f0 1d 10       	push   0x101df088
1010196f:	6a 02                	push   0x2
10101971:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10101977:	83 c4 10             	add    esp,0x10
1010197a:	5e                   	pop    esi
1010197b:	c3                   	ret
