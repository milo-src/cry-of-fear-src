
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118700 <.text+0x117700>:
10118700:	8b 0d 90 31 22 10    	mov    ecx,DWORD PTR ds:0x10223190
10118706:	85 c9                	test   ecx,ecx
10118708:	75 11                	jne    0x1011871b
1011870a:	68 60 57 1e 10       	push   0x101e5760
1011870f:	6a 01                	push   0x1
10118711:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10118717:	83 c4 08             	add    esp,0x8
1011871a:	c3                   	ret
1011871b:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
10118721:	85 c0                	test   eax,eax
10118723:	74 4d                	je     0x10118772
10118725:	f7 40 60 00 10 00 00 	test   DWORD PTR [eax+0x60],0x1000
1011872c:	74 22                	je     0x10118750
1011872e:	8b 10                	mov    edx,DWORD PTR [eax]
10118730:	8b c8                	mov    ecx,eax
10118732:	ff 92 28 01 00 00    	call   DWORD PTR [edx+0x128]
10118738:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011873d:	8b 80 fc 00 00 00    	mov    eax,DWORD PTR [eax+0xfc]
10118743:	81 60 60 ff ef ff ff 	and    DWORD PTR [eax+0x60],0xffffefff
1011874a:	8b 0d 90 31 22 10    	mov    ecx,DWORD PTR ds:0x10223190
10118750:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
10118756:	8b 80 dc 00 00 00    	mov    eax,DWORD PTR [eax+0xdc]
1011875c:	89 81 fc 00 00 00    	mov    DWORD PTR [ecx+0xfc],eax
10118762:	8b 0d 90 31 22 10    	mov    ecx,DWORD PTR ds:0x10223190
10118768:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
1011876e:	85 c0                	test   eax,eax
10118770:	75 b3                	jne    0x10118725
10118772:	c3                   	ret
