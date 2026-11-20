
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10092020 <.text+0x91020>:
10092020:	55                   	push   ebp
10092021:	8b ec                	mov    ebp,esp
10092023:	56                   	push   esi
10092024:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10092027:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1009202a:	85 f6                	test   esi,esi
1009202c:	75 13                	jne    0x10092041
1009202e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10092034:	85 c0                	test   eax,eax
10092036:	74 06                	je     0x1009203e
10092038:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1009203e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10092041:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10092047:	85 c9                	test   ecx,ecx
10092049:	74 07                	je     0x10092052
1009204b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1009204e:	85 c0                	test   eax,eax
10092050:	75 27                	jne    0x10092079
10092052:	68 dc 00 00 00       	push   0xdc
10092057:	51                   	push   ecx
10092058:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1009205e:	83 c4 08             	add    esp,0x8
10092061:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10092064:	85 c0                	test   eax,eax
10092066:	74 0c                	je     0x10092074
10092068:	c7 00 80 ff 1b 10    	mov    DWORD PTR [eax],0x101bff80
1009206e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10092071:	5e                   	pop    esi
10092072:	5d                   	pop    ebp
10092073:	c3                   	ret
10092074:	33 c0                	xor    eax,eax
10092076:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10092079:	5e                   	pop    esi
1009207a:	5d                   	pop    ebp
1009207b:	c3                   	ret
