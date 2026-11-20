
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120670 <.text+0x11f670>:
10120670:	55                   	push   ebp
10120671:	8b ec                	mov    ebp,esp
10120673:	56                   	push   esi
10120674:	57                   	push   edi
10120675:	6a 01                	push   0x1
10120677:	6a 68                	push   0x68
10120679:	8b f9                	mov    edi,ecx
1012067b:	e8 b6 0e 05 00       	call   0x10171536
10120680:	8b 17                	mov    edx,DWORD PTR [edi]
10120682:	8b f0                	mov    esi,eax
10120684:	83 c4 08             	add    esp,0x8
10120687:	89 56 64             	mov    DWORD PTR [esi+0x64],edx
1012068a:	8b d6                	mov    edx,esi
1012068c:	89 37                	mov    DWORD PTR [edi],esi
1012068e:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10120694:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1012069a:	03 4d 08             	add    ecx,DWORD PTR [ebp+0x8]
1012069d:	0f 1f 00             	nop    DWORD PTR [eax]
101206a0:	8a 01                	mov    al,BYTE PTR [ecx]
101206a2:	8d 49 01             	lea    ecx,[ecx+0x1]
101206a5:	88 02                	mov    BYTE PTR [edx],al
101206a7:	8d 52 01             	lea    edx,[edx+0x1]
101206aa:	84 c0                	test   al,al
101206ac:	75 f2                	jne    0x101206a0
101206ae:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101206b3:	8d 56 40             	lea    edx,[esi+0x40]
101206b6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
101206bc:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
101206bf:	90                   	nop
101206c0:	8a 08                	mov    cl,BYTE PTR [eax]
101206c2:	8d 40 01             	lea    eax,[eax+0x1]
101206c5:	88 0a                	mov    BYTE PTR [edx],cl
101206c7:	8d 52 01             	lea    edx,[edx+0x1]
101206ca:	84 c9                	test   cl,cl
101206cc:	75 f2                	jne    0x101206c0
101206ce:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
101206d1:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
101206d4:	ff 47 04             	inc    DWORD PTR [edi+0x4]
101206d7:	5f                   	pop    edi
101206d8:	5e                   	pop    esi
101206d9:	5d                   	pop    ebp
101206da:	c2 0c 00             	ret    0xc
